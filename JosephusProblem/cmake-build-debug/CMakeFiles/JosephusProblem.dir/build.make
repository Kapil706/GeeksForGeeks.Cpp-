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
CMAKE_SOURCE_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\JosephusProblem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\JosephusProblem\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/JosephusProblem.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/JosephusProblem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/JosephusProblem.dir/flags.make

CMakeFiles/JosephusProblem.dir/main.cpp.obj: CMakeFiles/JosephusProblem.dir/flags.make
CMakeFiles/JosephusProblem.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\JosephusProblem\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/JosephusProblem.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\JosephusProblem.dir\main.cpp.obj -c C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\JosephusProblem\main.cpp

CMakeFiles/JosephusProblem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JosephusProblem.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\JosephusProblem\main.cpp > CMakeFiles\JosephusProblem.dir\main.cpp.i

CMakeFiles/JosephusProblem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JosephusProblem.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\JosephusProblem\main.cpp -o CMakeFiles\JosephusProblem.dir\main.cpp.s

# Object files for target JosephusProblem
JosephusProblem_OBJECTS = \
"CMakeFiles/JosephusProblem.dir/main.cpp.obj"

# External object files for target JosephusProblem
JosephusProblem_EXTERNAL_OBJECTS =

JosephusProblem.exe: CMakeFiles/JosephusProblem.dir/main.cpp.obj
JosephusProblem.exe: CMakeFiles/JosephusProblem.dir/build.make
JosephusProblem.exe: CMakeFiles/JosephusProblem.dir/linklibs.rsp
JosephusProblem.exe: CMakeFiles/JosephusProblem.dir/objects1.rsp
JosephusProblem.exe: CMakeFiles/JosephusProblem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\JosephusProblem\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable JosephusProblem.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\JosephusProblem.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/JosephusProblem.dir/build: JosephusProblem.exe

.PHONY : CMakeFiles/JosephusProblem.dir/build

CMakeFiles/JosephusProblem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\JosephusProblem.dir\cmake_clean.cmake
.PHONY : CMakeFiles/JosephusProblem.dir/clean

CMakeFiles/JosephusProblem.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\JosephusProblem C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\JosephusProblem C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\JosephusProblem\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\JosephusProblem\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\JosephusProblem\cmake-build-debug\CMakeFiles\JosephusProblem.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/JosephusProblem.dir/depend

