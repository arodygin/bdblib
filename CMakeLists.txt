#---------------------------------------------------------------------------------------------------
#
#  BDB Library
#  Copyright (C) 2009  Artem Rodygin
#
#  This program is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, either version 3 of the License, or
#  (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
#---------------------------------------------------------------------------------------------------

project(bdblib)
cmake_minimum_required(VERSION 2.6)

set(CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR}/cmake)

if (MSVC)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
else (MSVC)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/bin)
endif (MSVC)

message("---------------------------------------------")

add_subdirectory(log4cplus build/log4cplus)
add_subdirectory(protobuf  build/protobuf)
add_subdirectory(protoc    build/protoc)
add_subdirectory(bdb       build/bdb)
add_subdirectory(test      build/test)
