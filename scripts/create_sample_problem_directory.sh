#!/bin/bash

program_name=''
languages="java,python,ruby,cpp,cs,js"

print_help() {
  echo "USAGE:
  create_sample_problem_directory.sh [-p PROGRAM_NAME] [-l PROGRAM_LANGUAGE] [-h]
  
  Options:
    -l: Programming language to test for. Available languages: ${languages}"
}

parse_arguments() {
  while getopts "p:l:h" opts; do
    case ${opts} in
      p)
        program_name="$OPTARG"
      ;;
      l)
        languages="$OPTARG"
      ;;
      h) print_help
        exit 0
      ;;
    esac
  done
}

parse_arguments $@

# Check if program name is given
if [ -z $program_name ]; then
  echo "ERROR: program name not given."
  echo ""
  print_help
  exit 1
fi


# Split languages comma separated string into individual languages
IFS=\, read -a languages <<<"$languages"

if [[ -d ${program_name} ]]; then
  echo ${program_name} already exists
else
  mkdir -p -m 775 ${program_name}
fi
if [[ -d ${program_name}/inputs ]]; then
  echo ${program_name}/inputs already exists
else
  mkdir -p -m 775 ${program_name}/inputs
fi

touch ${program_name}/inputs/input-1.in

for language in "${languages[@]}"; do

  if [ $language == java ]; then
    java_program_name=`echo "$program_name" | awk -F"-" '{for(i=1;i<=NF;i++){$i=toupper(substr($i,1,1)) substr($i,2)}} 1' OFS=""`
    filename="${program_name}/${java_program_name}.java"
    if [[ -f $_filename ]]; then
      echo $filename already exists
    else
      touch "$filename"

      echo 'public class '${java_program_name}' {
  public static void main(String[] args) {
    System.out.printf("'${java_program_name}' java program\n");
  }
}' >> "$filename"
    fi
  fi

  if [ $language == cpp ]; then
    filename="${program_name}/${program_name}.cpp"
    if [[ -f $_filename ]]; then
      echo $filename already exists
    else
      touch $filename
      echo '#include<iostream>

int main() {
    std::cout << "'${program_name}' cpp program" << std::endl;
    return 0;
}' >> $filename
    fi
  fi

  if [ $language == python ]; then
    filename="${program_name}/${program_name}.py"
    if [[ -f $_filename ]]; then
      echo $filename already exists
    else
      touch $filename
      echo "#!/usr/bin/env python

print('${program_name} python program')" >> $filename
    fi
  fi

  if [ $language == ruby ]; then
    ruby_program_name=`echo "$program_name" | sed -r 's/(-)([a-z])/_\2/g'`
    filename="${program_name}/${ruby_program_name}.rb"
    if [[ -f $_filename ]]; then
      echo $filename already exists
    else
      touch $filename
      echo "# frozen_string_literal: true

puts(\"sample ruby program\n\")
" >> $filename
    fi
  fi
  
  if [ $language == cs ]; then
    cs_program_name=`echo "$program_name" | awk -F"-" '{for(i=1;i<=NF;i++){$i=toupper(substr($i,1,1)) substr($i,2)}} 1' OFS=""`
    filename="${program_name}/${cs_program_name}.cs"
    if [[ -f $filename ]]; then
      echo $filename already exists
    else
      touch "$filename"

      echo 'using System;

namespace '${cs_program_name}'
{
    class '${cs_program_name}'
    {
        static void Main(string[] args) 
        {
            Console.WriteLine("'${cs_program_name}' C# program");
        }
    }
}' >> "$filename"
    fi
  fi

  if [ $language == js ]; then
    filename="${program_name}/${program_name}.js"
    if [[ -f $_filename ]]; then
      echo $filename already exists
    else
      touch $filename
      echo 'console.log("'${program_name}' javascript program");' >> $filename
    fi
  fi
done
