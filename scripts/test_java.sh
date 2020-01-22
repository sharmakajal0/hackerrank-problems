#!/bin/bash

function compile_and_test() {
    program_name=$1
    if [ -z "$program_name" ]
    then
	program_name=`basename "$PWD"`
    fi
    program_name=`echo "$program_name" | awk -F"-" '{for(i=1;i<=NF;i++){$i=toupper(substr($i,1,1)) substr($i,2)}} 1' OFS=""`
    if [ ! -d build ]; then
        mkdir -m 775 build
    fi

    javac ${program_name}.java -d build/ \
        && ls -1 inputs | while read input_file_name; do
            echo "-- Testing with input from '${input_file_name}':";
            java -classpath build/ ${program_name} < inputs/${input_file_name};
        done
}


compile_and_test $@

