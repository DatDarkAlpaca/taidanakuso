local qt = premake.extensions.qt

create_project("taidana-gui", "StaticLib", false)

files {
    "%{wks.location}/res/designer/**.ui",
    "%{wks.location}/res/icons/**",
    "%{wks.location}/res/*.qrc",
    "%{wks.location}/res/*.ico",
    "%{wks.location}/res/*.rc",
}

includedirs {
    "%{wks.location}/taidana-core/src",
}

setup_vendors()