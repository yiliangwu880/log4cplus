#功能：合并静态库


CLOG_LIB = ./lib/libclog.a

#build_cmake 为假目标文件，不需要实际文件
.PHONY:BUILD_CMAKE 

	
#最终目标，执行顺序
all:  BUILD_CMAKE $(CLOG_LIB)

	
BUILD_CMAKE:
	@sh cmake_build.sh
	
$(CLOG_LIB) : ./lib/liblog.a ./external/lib/liblog4cplus.a 
	sh combine_lib.sh
	
clean:
	rm -f $(TARGET)








