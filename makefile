#功能：合并静态库




TARGET = ./lib/libclog.a


all: $(TARGET) 
	sh build_cmake.sh


$(TARGET) : ./lib/liblog.a ./external/lib/liblog4cplus.a
	sh combine_lib.sh
	
clean:
	rm -f $(TARGET)








