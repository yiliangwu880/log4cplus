#pragma once
#include <log4cplus/logger.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/helpers/loglog.h>
#include <log4cplus/helpers/stringhelper.h>
#include <log4cplus/configurator.h>


class LogMgr
{

private:
	LogMgr() 
	{}
	 
public:
	static LogMgr &Obj()
	{
		static LogMgr obj;
		return obj;
	}
};
