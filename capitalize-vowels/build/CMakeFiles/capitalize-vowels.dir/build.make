# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/usuario/practicas/p09-funct-const-expression/capitalize-vowels

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/practicas/p09-funct-const-expression/capitalize-vowels/build

# Include any dependencies generated for this target.
include CMakeFiles/capitalize-vowels.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/capitalize-vowels.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/capitalize-vowels.dir/flags.make

CMakeFiles/capitalize-vowels.dir/src/capitalize-vowels.cc.o: CMakeFiles/capitalize-vowels.dir/flags.make
CMakeFiles/capitalize-vowels.dir/src/capitalize-vowels.cc.o: ../src/capitalize-vowels.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/p09-funct-const-expression/capitalize-vowels/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/capitalize-vowels.dir/src/capitalize-vowels.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/capitalize-vowels.dir/src/capitalize-vowels.cc.o -c /home/usuario/practicas/p09-funct-const-expression/capitalize-vowels/src/capitalize-vowels.cc

CMakeFiles/capitalize-vowels.dir/src/capitalize-vowels.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/capitalize-vowels.dir/src/capitalize-vowels.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/p09-funct-const-expression/capitalize-vowels/src/capitalize-vowels.cc > CMakeFiles/capitalize-vowels.dir/src/capitalize-vowels.cc.i

CMakeFiles/capitalize-vowels.dir/src/capitalize-vowels.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/capitalize-vowels.dir/src/capitalize-vowels.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/p09-funct-const-expression/capitalize-vowels/src/capitalize-vowels.cc -o CMakeFiles/capitalize-vowels.dir/src/capitalize-vowels.cc.s

# Object files for target capitalize-vowels
capitalize__vowels_OBJECTS = \
"CMakeFiles/capitalize-vowels.dir/src/capitalize-vowels.cc.o"

# External object files for target capitalize-vowels
capitalize__vowels_EXTERNAL_OBJECTS =

capitalize-vowels: CMakeFiles/capitalize-vowels.dir/src/capitalize-vowels.cc.o
capitalize-vowels: CMakeFiles/capitalize-vowels.dir/build.make
capitalize-vowels: CMakeFiles/capitalize-vowels.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usuario/practicas/p09-funct-const-expression/capitalize-vowels/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable capitalize-vowels"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/capitalize-vowels.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/capitalize-vowels.dir/build: capitalize-vowels

.PHONY : CMakeFiles/capitalize-vowels.dir/build

CMakeFiles/capitalize-vowels.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/capitalize-vowels.dir/cmake_clean.cmake
.PHONY : CMakeFiles/capitalize-vowels.dir/clean

CMakeFiles/capitalize-vowels.dir/depend:
	cd /home/usuario/practicas/p09-funct-const-expression/capitalize-vowels/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/practicas/p09-funct-const-expression/capitalize-vowels /home/usuario/practicas/p09-funct-const-expression/capitalize-vowels /home/usuario/practicas/p09-funct-const-expression/capitalize-vowels/build /home/usuario/practicas/p09-funct-const-expression/capitalize-vowels/build /home/usuario/practicas/p09-funct-const-expression/capitalize-vowels/build/CMakeFiles/capitalize-vowels.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/capitalize-vowels.dir/depend

