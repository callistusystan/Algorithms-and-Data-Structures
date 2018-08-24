#!/bin/sh

problem=$(echo $1 | sed 's/.*problems\/\([^\/]*\).*/\1/g')
if [ ! -d $problem ]; then
    mkdir $problem
    echo // $1 > ./$problem/solution.cpp
else
    echo Error: A folder already exists for this problem!
fi