
set(SPDLOG_BUILD_SHARED ON)
add_subdirectory(vendor/spdlog)

add_library(GE SHARED
	src/GE/Application.cpp
	src/GE/Log.cpp
)
target_link_libraries(GE PUBLIC spdlog::spdlog)
target_include_directories(GE PUBLIC src)
target_compile_definitions(GE PRIVATE GE_BUILD_DLL)

if (WIN32)
	target_compile_definitions(GE PUBLIC GE_PLATFORM_WINDOWS)
endif()
