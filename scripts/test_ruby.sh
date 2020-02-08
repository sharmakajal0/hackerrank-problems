#!/bin/bash

function test_ruby() {
    program_name=$1
    if [ -z "$program_name" ]
    then
        program_name=`basename "$PWD"`
    fi

    ruby_program_name=`echo "$program_name" | sed -r 's/(-)([a-z])/_\2/g'`

    ls -1 inputs | while read input_file_name; do
        echo "-- Testing with input from '${input_file_name}':";
        ruby ${ruby_program_name}.rb < inputs/${input_file_name};
    done
}


test_ruby $@

