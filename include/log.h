#pragma once
#include "stdio.h"
#include <unistd.h>
#include <log4cplus/logger.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/helpers/loglog.h>
#include <log4cplus/helpers/stringhelper.h>
#include <log4cplus/configurator.h>


class LogMgr
{

private:
	LogMgr();
	 
public:
	static LogMgr &Obj()
	{
		static LogMgr obj;
		return obj;
	}
	void init();

};


#define L_FATAL(...)  \
do{auto log4cplus_log = log4cplus::Logger::getInstance(LOG4CPLUS_TEXT("NORMAL_LOGGER"));\
LOG4CPLUS_FATAL_FMT(log4cplus_log, ##__VA_ARGS__);}while(false)

#define L_ERROR(...)  \
do{auto log4cplus_log = log4cplus::Logger::getInstance(LOG4CPLUS_TEXT("NORMAL_LOGGER"));\
LOG4CPLUS_ERROR_FMT(log4cplus_log, ##__VA_ARGS__);}while(false)

#define L_WARN(...)  \
do{auto log4cplus_log = log4cplus::Logger::getInstance(LOG4CPLUS_TEXT("NORMAL_LOGGER"));\
LOG4CPLUS_WARN_FMT(log4cplus_log, ##__VA_ARGS__);}while(false)

#define L_INFO(...)  \
do{auto log4cplus_log = log4cplus::Logger::getInstance(LOG4CPLUS_TEXT("NORMAL_LOGGER"));\
LOG4CPLUS_INFO_FMT(log4cplus_log, ##__VA_ARGS__);}while(false)

#define L_DEBUG(...)  \
do{auto log4cplus_log = log4cplus::Logger::getInstance(LOG4CPLUS_TEXT("NORMAL_LOGGER"));\
LOG4CPLUS_DEBUG_FMT(log4cplus_log, ##__VA_ARGS__);}while(false)

#define L_TRACE(...)  \
do{auto log4cplus_log = log4cplus::Logger::getInstance(LOG4CPLUS_TEXT("NORMAL_LOGGER"));\
LOG4CPLUS_TRACE_FMT(log4cplus_log, ##__VA_ARGS__);}while(false)
