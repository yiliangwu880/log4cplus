#include "log.h"

using namespace log4cplus;

LogMgr::LogMgr()
{
	PropertyConfigurator::doConfigure(LOG4CPLUS_TEXT("clog4cplus.conf"));
}

void LogMgr::init()
{

}

