# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Jetbrains\apps\CLion\ch-0\182.3684.76\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Jetbrains\apps\CLion\ch-0\182.3684.76\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\miska\miska_cpp\odzadu

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\miska\miska_cpp\odzadu\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/odzadu.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/odzadu.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/odzadu.dir/flags.make

CMakeFiles/odzadu.dir/main.cpp.obj: CMakeFiles/odzadu.dir/flags.make
CMakeFiles/odzadu.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\miska\miska_cpp\odzadu\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/odzadu.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\odzadu.dir\main.cpp.obj -c C:\miska\miska_cpp\odzadu\main.cpp

CMakeFiles/odzadu.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/odzadu.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\miska\miska_cpp\odzadu\main.cpp > CMakeFiles\odzadu.dir\main.cpp.i

CMakeFiles/odzadu.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/odzadu.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\miska\miska_cpp\odzadu\main.cpp -o CMakeFiles\odzadu.dir\main.cpp.s

# Object files for target odzadu
odzadu_OBJECTS = \
"CMakeFiles/odzadu.dir/main.cpp.obj"

# External object files for target odzadu
odzadu_EXTERNAL_OBJECTS =

odzadu.exe: CMakeFiles/odzadu.dir/main.cpp.obj
odzadu.exe: CMakeFiles/odzadu.dir/build.make
odzadu.exe: CMakeFiles/odzadu.dir/linklibs.rsp
odzadu.exe: CMakeFiles/odzadu.dir/objects1.rsp
odzadu.exe: CMakeFiles/odzadu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\miska\miska_cpp\odzadu\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable odzadu.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\odzadu.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/odzadu.dir/build: odzadu.exe

.PHONY : CMakeFiles/odzadu.dir/build

CMakeFiles/odzadu.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\odzadu.dir\cmake_clean.cmake
.PHONY : CMakeFiles/odzadu.dir/clean

CMakeFiles/odzadu.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\miska\miska_cpp\odzadu C:\miska\miska_cpp\odzadu C:\miska\miska_cpp\odzadu\cmake-build-debug C:\miska\miska_cpp\odzadu\cmake-build-debug C:\miska\miska_cpp\odzadu\cmake-build-debug\CMakeFiles\odzadu.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/odzadu.dir/depend

