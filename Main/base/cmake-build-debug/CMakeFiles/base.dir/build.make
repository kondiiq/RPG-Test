# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /snap/clion/123/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/123/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kondiiq/Desktop/repo/Main/base

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kondiiq/Desktop/repo/Main/base/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/base.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/base.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/base.dir/flags.make

CMakeFiles/base.dir/main.cpp.o: CMakeFiles/base.dir/flags.make
CMakeFiles/base.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kondiiq/Desktop/repo/Main/base/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/base.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/base.dir/main.cpp.o -c /home/kondiiq/Desktop/repo/Main/base/main.cpp

CMakeFiles/base.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kondiiq/Desktop/repo/Main/base/main.cpp > CMakeFiles/base.dir/main.cpp.i

CMakeFiles/base.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kondiiq/Desktop/repo/Main/base/main.cpp -o CMakeFiles/base.dir/main.cpp.s

CMakeFiles/base.dir/Hero.cpp.o: CMakeFiles/base.dir/flags.make
CMakeFiles/base.dir/Hero.cpp.o: ../Hero.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kondiiq/Desktop/repo/Main/base/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/base.dir/Hero.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/base.dir/Hero.cpp.o -c /home/kondiiq/Desktop/repo/Main/base/Hero.cpp

CMakeFiles/base.dir/Hero.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base.dir/Hero.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kondiiq/Desktop/repo/Main/base/Hero.cpp > CMakeFiles/base.dir/Hero.cpp.i

CMakeFiles/base.dir/Hero.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base.dir/Hero.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kondiiq/Desktop/repo/Main/base/Hero.cpp -o CMakeFiles/base.dir/Hero.cpp.s

CMakeFiles/base.dir/Map.cpp.o: CMakeFiles/base.dir/flags.make
CMakeFiles/base.dir/Map.cpp.o: ../Map.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kondiiq/Desktop/repo/Main/base/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/base.dir/Map.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/base.dir/Map.cpp.o -c /home/kondiiq/Desktop/repo/Main/base/Map.cpp

CMakeFiles/base.dir/Map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base.dir/Map.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kondiiq/Desktop/repo/Main/base/Map.cpp > CMakeFiles/base.dir/Map.cpp.i

CMakeFiles/base.dir/Map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base.dir/Map.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kondiiq/Desktop/repo/Main/base/Map.cpp -o CMakeFiles/base.dir/Map.cpp.s

CMakeFiles/base.dir/Enemy.cpp.o: CMakeFiles/base.dir/flags.make
CMakeFiles/base.dir/Enemy.cpp.o: ../Enemy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kondiiq/Desktop/repo/Main/base/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/base.dir/Enemy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/base.dir/Enemy.cpp.o -c /home/kondiiq/Desktop/repo/Main/base/Enemy.cpp

CMakeFiles/base.dir/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base.dir/Enemy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kondiiq/Desktop/repo/Main/base/Enemy.cpp > CMakeFiles/base.dir/Enemy.cpp.i

CMakeFiles/base.dir/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base.dir/Enemy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kondiiq/Desktop/repo/Main/base/Enemy.cpp -o CMakeFiles/base.dir/Enemy.cpp.s

CMakeFiles/base.dir/Archer_enemy.cpp.o: CMakeFiles/base.dir/flags.make
CMakeFiles/base.dir/Archer_enemy.cpp.o: ../Archer_enemy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kondiiq/Desktop/repo/Main/base/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/base.dir/Archer_enemy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/base.dir/Archer_enemy.cpp.o -c /home/kondiiq/Desktop/repo/Main/base/Archer_enemy.cpp

CMakeFiles/base.dir/Archer_enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base.dir/Archer_enemy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kondiiq/Desktop/repo/Main/base/Archer_enemy.cpp > CMakeFiles/base.dir/Archer_enemy.cpp.i

CMakeFiles/base.dir/Archer_enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base.dir/Archer_enemy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kondiiq/Desktop/repo/Main/base/Archer_enemy.cpp -o CMakeFiles/base.dir/Archer_enemy.cpp.s

CMakeFiles/base.dir/Warior_enemy.cpp.o: CMakeFiles/base.dir/flags.make
CMakeFiles/base.dir/Warior_enemy.cpp.o: ../Warior_enemy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kondiiq/Desktop/repo/Main/base/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/base.dir/Warior_enemy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/base.dir/Warior_enemy.cpp.o -c /home/kondiiq/Desktop/repo/Main/base/Warior_enemy.cpp

CMakeFiles/base.dir/Warior_enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base.dir/Warior_enemy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kondiiq/Desktop/repo/Main/base/Warior_enemy.cpp > CMakeFiles/base.dir/Warior_enemy.cpp.i

CMakeFiles/base.dir/Warior_enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base.dir/Warior_enemy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kondiiq/Desktop/repo/Main/base/Warior_enemy.cpp -o CMakeFiles/base.dir/Warior_enemy.cpp.s

# Object files for target base
base_OBJECTS = \
"CMakeFiles/base.dir/main.cpp.o" \
"CMakeFiles/base.dir/Hero.cpp.o" \
"CMakeFiles/base.dir/Map.cpp.o" \
"CMakeFiles/base.dir/Enemy.cpp.o" \
"CMakeFiles/base.dir/Archer_enemy.cpp.o" \
"CMakeFiles/base.dir/Warior_enemy.cpp.o"

# External object files for target base
base_EXTERNAL_OBJECTS =

base: CMakeFiles/base.dir/main.cpp.o
base: CMakeFiles/base.dir/Hero.cpp.o
base: CMakeFiles/base.dir/Map.cpp.o
base: CMakeFiles/base.dir/Enemy.cpp.o
base: CMakeFiles/base.dir/Archer_enemy.cpp.o
base: CMakeFiles/base.dir/Warior_enemy.cpp.o
base: CMakeFiles/base.dir/build.make
base: CMakeFiles/base.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kondiiq/Desktop/repo/Main/base/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable base"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/base.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/base.dir/build: base

.PHONY : CMakeFiles/base.dir/build

CMakeFiles/base.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/base.dir/cmake_clean.cmake
.PHONY : CMakeFiles/base.dir/clean

CMakeFiles/base.dir/depend:
	cd /home/kondiiq/Desktop/repo/Main/base/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kondiiq/Desktop/repo/Main/base /home/kondiiq/Desktop/repo/Main/base /home/kondiiq/Desktop/repo/Main/base/cmake-build-debug /home/kondiiq/Desktop/repo/Main/base/cmake-build-debug /home/kondiiq/Desktop/repo/Main/base/cmake-build-debug/CMakeFiles/base.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/base.dir/depend

