require "vendor/premake-qt/qt"
require "scripts/clear"
require "scripts/project"
include "dependencies/conandeps.premake5.lua"

output_path         = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
binaries_path       = "%{wks.location}/build/bin/" .. "%{output_path}"
intermediate_path   = "%{wks.location}/build/intermediate/" .. "%{output_path}"

workspace "taidana-kuso"
    architecture "x64"
    configurations {
        "Debug",
        "Release"
    }
	
	flags { 
        "MultiProcessorCompile" 
    }
	
	startproject "taidana-kuso"


output_path         = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
binaries_path       = "%{wks.location}/build/bin/" 								    .. "%{output_path}"
intermediate_path   = "%{wks.location}/build/intermediate/" 					    .. "%{output_path}"
vendor_path         = "%{wks.location}/vendor/"

group "dependencies"
    include "vendor/dependencies.lua"
    include "vendor/qass.lua"
group ""

include "taidana-core/taidana-core.lua"
include "taidana-gui/taidana-gui.lua"
include "taidana-kuso/taidana-kuso.lua"