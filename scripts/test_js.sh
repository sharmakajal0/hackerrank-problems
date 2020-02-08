#!/bin/bash

function test_js() {
    program_name=$1
    if [ -z "$program_name" ]
    then
        program_name=`basename "$PWD"`
    fi

    ls -1 inputs | while read input_file_name; do
        echo "-- Testing with input from '${input_file_name}':";
        node ${program_name}.js < inputs/${input_file_name};
    done
}


test_js $@

