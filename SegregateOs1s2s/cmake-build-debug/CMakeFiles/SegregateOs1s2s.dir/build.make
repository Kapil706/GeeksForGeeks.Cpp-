# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "D:\Clion\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Clion\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SegregateOs1s2s

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SegregateOs1s2s\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SegregateOs1s2s.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SegregateOs1s2s.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SegregateOs1s2s.dir/flags.make

CMakeFiles/SegregateOs1s2s.dir/main.cpp.obj: CMakeFiles/SegregateOs1s2s.dir/flags.make
CMakeFiles/SegregateOs1s2s.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SegregateOs1s2s\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SegregateOs1s2s.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SegregateOs1s2s.dir\main.cpp.obj -c C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SegregateOs1s2s\main.cpp

CMakeFiles/SegregateOs1s2s.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SegregateOs1s2s.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SegregateOs1s2s\main.cpp > CMakeFiles\SegregateOs1s2s.dir\main.cpp.i

CMakeFiles/SegregateOs1s2s.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SegregateOs1s2s.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SegregateOs1s2s\main.cpp -o CMakeFiles\SegregateOs1s2s.dir\main.cpp.s

# Object files for target SegregateOs1s2s
SegregateOs1s2s_OBJECTS = \
"CMakeFiles/SegregateOs1s2s.dir/main.cpp.obj"

# External object files for target SegregateOs1s2s
SegregateOs1s2s_EXTERNAL_OBJECTS =

SegregateOs1s2s.exe: CMakeFiles/SegregateOs1s2s.dir/main.cpp.obj
SegregateOs1s2s.exe: CMakeFiles/SegregateOs1s2s.dir/build.make
SegregateOs1s2s.exe: CMakeFiles/SegregateOs1s2s.dir/linklibs.rsp
SegregateOs1s2s.exe: CMakeFiles/SegregateOs1s2s.dir/objects1.rsp
SegregateOs1s2s.exe: CMakeFiles/SegregateOs1s2s.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SegregateOs1s2s\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SegregateOs1s2s.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SegregateOs1s2s.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SegregateOs1s2s.dir/build: SegregateOs1s2s.exe

.PHONY : CMakeFiles/SegregateOs1s2s.dir/build

CMakeFiles/SegregateOs1s2s.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SegregateOs1s2s.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SegregateOs1s2s.dir/clean

CMakeFiles/SegregateOs1s2s.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SegregateOs1s2s C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SegregateOs1s2s C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SegregateOs1s2s\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SegregateOs1s2s\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SegregateOs1s2s\cmake-build-debug\CMakeFiles\SegregateOs1s2s.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SegregateOs1s2s.dir/depend

