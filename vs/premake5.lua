--
-- premake5 file to build RecastDemo
-- http://premake.github.io/
--
require "lib"

local action = _ACTION or ""
local outdir = action


WorkSpaceInit  "log4cplus"



Project "log4cplus"
	IncludeFile { 
		"../external/",
	}

	SrcPath { 
		"../**",  --**递归所有子目录，指定目录可用 "cc/*.cpp" 或者  "cc/**.cpp"

	}
	files {
	"../*.txt",
	"../*.lua",
	}
	
    
    




