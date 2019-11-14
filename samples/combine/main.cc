#include "log.h"

int main(int argc, char* argv[]) 
{
	LogMgr::Obj().init();
	while(1)
	{
		L_FATAL("k");
		L_ERROR("k");
		L_WARN("k");
		L_INFO("k");
		L_DEBUG("k%s","_abc");
		L_TRACE("k%d", 5);
		sleep(1);//hour
	}
	return 0;
}

