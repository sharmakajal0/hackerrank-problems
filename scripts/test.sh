#!/bin/bash

if [ -z "$program_name" ]
then
	program_name=`basename "$PWD"`
fi

languages="java,python,ruby,cpp,cs,js"

print_help() {
  echo "USAGE:
  test [-l PROGRAM_LANGUAGE] [-h]
  
  Options:
    -l: Programming language to test for. Available languages: ${languages}"
}

parse_arguments() {
  while getopts "p:l:h" opts; do
    case ${opts} in
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


# Split languages comma separated string into individual languages
IFS=\, read -a languages <<<"$languages"

run_file() {
  _filename=$1
  _language=$2
  if [[ -f $_filename ]]; then
    bash test_${_language}.sh
  else
    echo $_filename not present
  fi
}

for language in "${languages[@]}"; do
  if [ $language == java ]; then
    java_program_name=`echo "$program_name" | awk -F"-" '{for(i=1;i<=NF;i++){$i=toupper(substr($i,1,1)) substr($i,2)}} 1' OFS=""`
    filename="${java_program_name}.java"
    run_file "$filename" $language
  fi
  if [ $language == cpp ]; then
    filename="${program_name}.cpp"
    run_file "$filename" $language
  fi
  if [ $language == python ]; then
    filename="${program_name}.py"
    run_file "$filename" $language
  fi
  if [ $language == ruby ]; then
    ruby_program_name=`echo "$program_name" | sed -r 's/(-)([a-z])/_\2/g'`
    filename="${ruby_program_name}.rb"
    run_file "$filename" $language
  fi
  if [ $language == cs ]; then
    cs_program_name=`echo "$program_name" | awk -F"-" '{for(i=1;i<=NF;i++){$i=toupper(substr($i,1,1)) substr($i,2)}} 1' OFS=""`
    filename="${cs_program_name}.cs"
    run_file "$filename" $language
  fi
  if [ $language == js ]; then
    filename="${program_name}.js"
    run_file "$filename" $language
  fi
done
