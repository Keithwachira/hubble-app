# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/keith/finalwork/GCompris-qt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release

# Utility rule file for rcc_memory-math-div.

# Include the progress variables for this target.
include src/activities/memory-math-div/CMakeFiles/rcc_memory-math-div.dir/progress.make

src/activities/memory-math-div/CMakeFiles/rcc_memory-math-div: share/gcompris-qt/rcc/memory-math-div.rcc
src/activities/memory-math-div/CMakeFiles/rcc_memory-math-div: src/activities/memory-math-div/memory-math-div.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generate memory-math-div RCC"

share/gcompris-qt/rcc/memory-math-div.rcc: /home/keith/finalwork/GCompris-qt/src/activities/memory-math-div/MemoryMathDiv.qml
share/gcompris-qt/rcc/memory-math-div.rcc: /home/keith/finalwork/GCompris-qt/src/activities/memory-math-div/ActivityInfo.qml
share/gcompris-qt/rcc/memory-math-div.rcc: /home/keith/finalwork/GCompris-qt/src/activities/memory-math-div/memory-math-div.svg
share/gcompris-qt/rcc/memory-math-div.rcc: /home/keith/finalwork/GCompris-qt/src/activities/memory-math-div/memory-divdataset.js
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ../../../share/gcompris-qt/rcc/memory-math-div.rcc"
	cd /home/keith/finalwork/GCompris-qt/src/activities/memory-math-div && /home/keith/Qt5.7.0/5.7/gcc_64/bin/rcc -binary -o /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/share/gcompris-qt/rcc/memory-math-div.rcc - < /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/memory-math-div/memory-math-div.qrc

rcc_memory-math-div: src/activities/memory-math-div/CMakeFiles/rcc_memory-math-div
rcc_memory-math-div: share/gcompris-qt/rcc/memory-math-div.rcc
rcc_memory-math-div: src/activities/memory-math-div/CMakeFiles/rcc_memory-math-div.dir/build.make

.PHONY : rcc_memory-math-div

# Rule to build all files generated by this target.
src/activities/memory-math-div/CMakeFiles/rcc_memory-math-div.dir/build: rcc_memory-math-div

.PHONY : src/activities/memory-math-div/CMakeFiles/rcc_memory-math-div.dir/build

src/activities/memory-math-div/CMakeFiles/rcc_memory-math-div.dir/clean:
	cd /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/memory-math-div && $(CMAKE_COMMAND) -P CMakeFiles/rcc_memory-math-div.dir/cmake_clean.cmake
.PHONY : src/activities/memory-math-div/CMakeFiles/rcc_memory-math-div.dir/clean

src/activities/memory-math-div/CMakeFiles/rcc_memory-math-div.dir/depend:
	cd /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/keith/finalwork/GCompris-qt /home/keith/finalwork/GCompris-qt/src/activities/memory-math-div /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/memory-math-div /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/memory-math-div/CMakeFiles/rcc_memory-math-div.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/activities/memory-math-div/CMakeFiles/rcc_memory-math-div.dir/depend
