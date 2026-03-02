cmake_minimum_required(VERSION 3.28 FATAL_ERROR)

project(Chip-8-Interpreter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_SCAN_FOR_MODULES ON)

#set(SDL_SHARED OFF CACHE BOOL "" FORCE)
#set(SDL_STATIC ON CACHE BOOL "" FORCE)

#add_subdirectory(external/SDL2)

add_executable(chip-8-interpreter src/Main.cpp)

target_compile_features(chip-8-interpreter PRIVATE cxx_std_23)

#target_sources(chip-8-interpreter PUBLIC FILE_SET CXX_MODULES 
    #FILES src/chip8.ixx src/chip8-interpreter.ixx src/chip8-renderer.ixx src/chip8-audio.ixx)

#target_link_libraries(chip-8-interpreter PRIVATE SDL3::SDL3-static)


# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()
