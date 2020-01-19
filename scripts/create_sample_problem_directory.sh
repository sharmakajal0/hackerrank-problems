#!/bin/sh

program_name=$1

mkdir -p -m 775 ${program_name}
touch ${program_name}/${program_name}.cpp

mkdir -p -m 775 ${program_name}/inputs
touch ${program_name}/inputs/input-1.in

