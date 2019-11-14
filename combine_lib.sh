#!/bin/sh
#合并静态库
echo combine lib
mkdir -p tmp
cd tmp
ar x ../lib/liblog.a
ar x ../external/lib/liblog4cplus.a
ar cru libclog.a *.o
ranlib libclog.a
cp libclog.a ../lib/



