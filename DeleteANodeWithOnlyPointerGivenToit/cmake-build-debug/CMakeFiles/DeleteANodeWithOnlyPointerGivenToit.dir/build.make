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
CMAKE_SOURCE_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\DeleteANodeWithOnlyPointerGivenToit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\DeleteANodeWithOnlyPointerGivenToit\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/flags.make

CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/main.cpp.obj: CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/flags.make
CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\DeleteANodeWithOnlyPointerGivenToit\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DeleteANodeWithOnlyPointerGivenToit.dir\main.cpp.obj -c C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\DeleteANodeWithOnlyPointerGivenToit\main.cpp

CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\DeleteANodeWithOnlyPointerGivenToit\main.cpp > CMakeFiles\DeleteANodeWithOnlyPointerGivenToit.dir\main.cpp.i

CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\DeleteANodeWithOnlyPointerGivenToit\main.cpp -o CMakeFiles\DeleteANodeWithOnlyPointerGivenToit.dir\main.cpp.s

# Object files for target DeleteANodeWithOnlyPointerGivenToit
DeleteANodeWithOnlyPointerGivenToit_OBJECTS = \
"CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/main.cpp.obj"

# External object files for target DeleteANodeWithOnlyPointerGivenToit
DeleteANodeWithOnlyPointerGivenToit_EXTERNAL_OBJECTS =

DeleteANodeWithOnlyPointerGivenToit.exe: CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/main.cpp.obj
DeleteANodeWithOnlyPointerGivenToit.exe: CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/build.make
DeleteANodeWithOnlyPointerGivenToit.exe: CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/linklibs.rsp
DeleteANodeWithOnlyPointerGivenToit.exe: CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/objects1.rsp
DeleteANodeWithOnlyPointerGivenToit.exe: CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\DeleteANodeWithOnlyPointerGivenToit\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DeleteANodeWithOnlyPointerGivenToit.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DeleteANodeWithOnlyPointerGivenToit.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/build: DeleteANodeWithOnlyPointerGivenToit.exe

.PHONY : CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/build

CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DeleteANodeWithOnlyPointerGivenToit.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/clean

CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\DeleteANodeWithOnlyPointerGivenToit C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\DeleteANodeWithOnlyPointerGivenToit C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\DeleteANodeWithOnlyPointerGivenToit\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\DeleteANodeWithOnlyPointerGivenToit\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\DeleteANodeWithOnlyPointerGivenToit\cmake-build-debug\CMakeFiles\DeleteANodeWithOnlyPointerGivenToit.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DeleteANodeWithOnlyPointerGivenToit.dir/depend

