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

# Utility rule file for rcc_louis-braille.

# Include the progress variables for this target.
include src/activities/louis-braille/CMakeFiles/rcc_louis-braille.dir/progress.make

src/activities/louis-braille/CMakeFiles/rcc_louis-braille: share/gcompris-qt/rcc/louis-braille.rcc
src/activities/louis-braille/CMakeFiles/rcc_louis-braille: src/activities/louis-braille/louis-braille.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generate louis-braille RCC"

share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/ActivityInfo.qml
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/LouisBraille.qml
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/ReorderList.qml
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/louis-braille.svg
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/louis_braille_data.js
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/louis-braille.js
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/resource/braille_ball.jpg
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/resource/top_back.svg
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/resource/fireplace.jpg
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/resource/statue.jpg
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/resource/rnib.jpg
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/resource/louis.png
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/resource/workshop.jpg
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/resource/piano.svg
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/resource/chart.png
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/resource/braille.jpg
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/resource/teach.jpg
share/gcompris-qt/rcc/louis-braille.rcc: /home/keith/finalwork/GCompris-qt/src/activities/louis-braille/resource/night_printing.jpg
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ../../../share/gcompris-qt/rcc/louis-braille.rcc"
	cd /home/keith/finalwork/GCompris-qt/src/activities/louis-braille && /home/keith/Qt5.7.0/5.7/gcc_64/bin/rcc -binary -o /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/share/gcompris-qt/rcc/louis-braille.rcc - < /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/louis-braille/louis-braille.qrc

rcc_louis-braille: src/activities/louis-braille/CMakeFiles/rcc_louis-braille
rcc_louis-braille: share/gcompris-qt/rcc/louis-braille.rcc
rcc_louis-braille: src/activities/louis-braille/CMakeFiles/rcc_louis-braille.dir/build.make

.PHONY : rcc_louis-braille

# Rule to build all files generated by this target.
src/activities/louis-braille/CMakeFiles/rcc_louis-braille.dir/build: rcc_louis-braille

.PHONY : src/activities/louis-braille/CMakeFiles/rcc_louis-braille.dir/build

src/activities/louis-braille/CMakeFiles/rcc_louis-braille.dir/clean:
	cd /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/louis-braille && $(CMAKE_COMMAND) -P CMakeFiles/rcc_louis-braille.dir/cmake_clean.cmake
.PHONY : src/activities/louis-braille/CMakeFiles/rcc_louis-braille.dir/clean

src/activities/louis-braille/CMakeFiles/rcc_louis-braille.dir/depend:
	cd /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/keith/finalwork/GCompris-qt /home/keith/finalwork/GCompris-qt/src/activities/louis-braille /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/louis-braille /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/louis-braille/CMakeFiles/rcc_louis-braille.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/activities/louis-braille/CMakeFiles/rcc_louis-braille.dir/depend
