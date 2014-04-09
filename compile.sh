#!/bin/bash
FILECPP=$1".cpp"
FILEBC=$1".bc"
FILEBC1=$1".bc1"
FILEBC2=$1".bc2"
FILEOBJ=$1".o"
FILEEXE=$1
$LLVM_ROOT/bin/clang++ -emit-llvm -c $FILECPP -o $FILEBC
$LLVM_ROOT/bin/llvm-link -o $FILEBC1 $FILEBC  
$LLVM_ROOT/bin/opt $FILEBC1 -o $FILEBC2 -PrivilegeSeparationOnModule
$LLVM_ROOT/bin/llc -filetype=obj $FILEBC2 -o $FILEOBJ
$LLVM_ROOT/bin/clang++ -g $FILEOBJ -o $FILEEXE 
$LLVM_ROOT/bin/clang++ -v -Xlinker "-Tps_link_script.ld"  -Xlinker "--verbose"   $FILEOBJ -o $FILEEXE
#$LLVM_ROOT/bin/clang++ $FILEOBJ -o $FILEEXE
