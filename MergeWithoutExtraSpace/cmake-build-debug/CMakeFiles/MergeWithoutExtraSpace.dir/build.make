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
CMAKE_SOURCE_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\MergeWithoutExtraSpace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\MergeWithoutExtraSpace\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MergeWithoutExtraSpace.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MergeWithoutExtraSpace.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MergeWithoutExtraSpace.dir/flags.make

CMakeFiles/MergeWithoutExtraSpace.dir/main.cpp.obj: CMakeFiles/MergeWithoutExtraSpace.dir/flags.make
CMakeFiles/MergeWithoutExtraSpace.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\MergeWithoutExtraSpace\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MergeWithoutExtraSpace.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MergeWithoutExtraSpace.dir\main.cpp.obj -c C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\MergeWithoutExtraSpace\main.cpp

CMakeFiles/MergeWithoutExtraSpace.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MergeWithoutExtraSpace.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\MergeWithoutExtraSpace\main.cpp > CMakeFiles\MergeWithoutExtraSpace.dir\main.cpp.i

CMakeFiles/MergeWithoutExtraSpace.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MergeWithoutExtraSpace.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\MergeWithoutExtraSpace\main.cpp -o CMakeFiles\MergeWithoutExtraSpace.dir\main.cpp.s

# Object files for target MergeWithoutExtraSpace
MergeWithoutExtraSpace_OBJECTS = \
"CMakeFiles/MergeWithoutExtraSpace.dir/main.cpp.obj"

# External object files for target MergeWithoutExtraSpace
MergeWithoutExtraSpace_EXTERNAL_OBJECTS =

MergeWithoutExtraSpace.exe: CMakeFiles/MergeWithoutExtraSpace.dir/main.cpp.obj
MergeWithoutExtraSpace.exe: CMakeFiles/MergeWithoutExtraSpace.dir/build.make
MergeWithoutExtraSpace.exe: CMakeFiles/MergeWithoutExtraSpace.dir/linklibs.rsp
MergeWithoutExtraSpace.exe: CMakeFiles/MergeWithoutExtraSpace.dir/objects1.rsp
MergeWithoutExtraSpace.exe: CMakeFiles/MergeWithoutExtraSpace.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\MergeWithoutExtraSpace\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MergeWithoutExtraSpace.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MergeWithoutExtraSpace.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MergeWithoutExtraSpace.dir/build: MergeWithoutExtraSpace.exe

.PHONY : CMakeFiles/MergeWithoutExtraSpace.dir/build

CMakeFiles/MergeWithoutExtraSpace.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MergeWithoutExtraSpace.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MergeWithoutExtraSpace.dir/clean

CMakeFiles/MergeWithoutExtraSpace.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\MergeWithoutExtraSpace C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\MergeWithoutExtraSpace C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\MergeWithoutExtraSpace\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\MergeWithoutExtraSpace\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\MergeWithoutExtraSpace\cmake-build-debug\CMakeFiles\MergeWithoutExtraSpace.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MergeWithoutExtraSpace.dir/depend

