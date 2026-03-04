cmake_minimum_required(VERSION 3.28 FATAL_ERROR)

project(GameBoy LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#set(SDL_SHARED OFF CACHE BOOL "" FORCE)
#set(SDL_STATIC ON CACHE BOOL "" FORCE)

#add_subdirectory(external/SDL2)

add_executable(gameboy src/Main.cpp src/Gameboy.cpp src/CPU.cpp src/ALU.cpp src/Bus.cpp
               src/RegisterFile.cpp src/ControlUnit.cpp src/IDU.cpp)

target_compile_features(gameboy PRIVATE cxx_std_23)

#target_link_libraries(gameboy PRIVATE SDL3::SDL3-static)


# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()
