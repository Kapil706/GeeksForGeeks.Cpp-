# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\CountOfNodesInLinkedList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\CountOfNodesInLinkedList\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CountOfNodesInLinkedList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CountOfNodesInLinkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CountOfNodesInLinkedList.dir/flags.make

CMakeFiles/CountOfNodesInLinkedList.dir/main.cpp.obj: CMakeFiles/CountOfNodesInLinkedList.dir/flags.make
CMakeFiles/CountOfNodesInLinkedList.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\CountOfNodesInLinkedList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CountOfNodesInLinkedList.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CountOfNodesInLinkedList.dir\main.cpp.obj -c C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\CountOfNodesInLinkedList\main.cpp

CMakeFiles/CountOfNodesInLinkedList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CountOfNodesInLinkedList.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\CountOfNodesInLinkedList\main.cpp > CMakeFiles\CountOfNodesInLinkedList.dir\main.cpp.i

CMakeFiles/CountOfNodesInLinkedList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CountOfNodesInLinkedList.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\CountOfNodesInLinkedList\main.cpp -o CMakeFiles\CountOfNodesInLinkedList.dir\main.cpp.s

# Object files for target CountOfNodesInLinkedList
CountOfNodesInLinkedList_OBJECTS = \
"CMakeFiles/CountOfNodesInLinkedList.dir/main.cpp.obj"

# External object files for target CountOfNodesInLinkedList
CountOfNodesInLinkedList_EXTERNAL_OBJECTS =

CountOfNodesInLinkedList.exe: CMakeFiles/CountOfNodesInLinkedList.dir/main.cpp.obj
CountOfNodesInLinkedList.exe: CMakeFiles/CountOfNodesInLinkedList.dir/build.make
CountOfNodesInLinkedList.exe: CMakeFiles/CountOfNodesInLinkedList.dir/linklibs.rsp
CountOfNodesInLinkedList.exe: CMakeFiles/CountOfNodesInLinkedList.dir/objects1.rsp
CountOfNodesInLinkedList.exe: CMakeFiles/CountOfNodesInLinkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\CountOfNodesInLinkedList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CountOfNodesInLinkedList.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CountOfNodesInLinkedList.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CountOfNodesInLinkedList.dir/build: CountOfNodesInLinkedList.exe

.PHONY : CMakeFiles/CountOfNodesInLinkedList.dir/build

CMakeFiles/CountOfNodesInLinkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CountOfNodesInLinkedList.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CountOfNodesInLinkedList.dir/clean

CMakeFiles/CountOfNodesInLinkedList.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\CountOfNodesInLinkedList C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\CountOfNodesInLinkedList C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\CountOfNodesInLinkedList\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\CountOfNodesInLinkedList\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\CountOfNodesInLinkedList\cmake-build-debug\CMakeFiles\CountOfNodesInLinkedList.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CountOfNodesInLinkedList.dir/depend
