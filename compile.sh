#!/bin/bash
# compile.sh
clear
echo "Compiling..."
g++ main.cpp \
  student.cpp \
  group.cpp \
  -o students
echo "Running..."
echo ""
./students
