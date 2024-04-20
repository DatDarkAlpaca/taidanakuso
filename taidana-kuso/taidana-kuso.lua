local qt = premake.extensions.qt

create_project("taidana-kuso", "ConsoleApp")

includedirs {
    "%{wks.location}/taidana-core/src",
    "%{wks.location}/taidana-gui/src",
    "%{wks.location}/taidana-gui",
    intermediate_path .. "/taidana-gui",
}

links { 
    "taidana-core",
    "taidana-gui",
}


setup_vendors()

prebuildcommands "{COPYDIR}  \"%{wks.location}res/styles\"                     \"%{wks.location}/taidana-kuso/res/styles\""
prebuildcommands "{COPYDIR}  \"%{wks.location}res/styles\"                     \"%{binaries_path}/taidana-kuso/res/styles\""