#!/bin/bash

function compile_and_test() {
    program_name=$1
    if [ -z "$program_name" ]
    then
	program_name=`basename "$PWD"`
    fi
    if [ ! -d build ]; then
        mkdir -m 775 build
    fi

    g++ ${program_name}.cpp -o build/${program_name} \
        && ls -1 inputs | while read input_file_name; do
            echo "-- Testing with input from '${input_file_name}':";
            build/${program_name} < inputs/${input_file_name};
        done
}


compile_and_test $@

