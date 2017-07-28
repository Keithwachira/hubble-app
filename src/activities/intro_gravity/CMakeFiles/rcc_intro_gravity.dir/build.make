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

# Utility rule file for rcc_intro_gravity.

# Include the progress variables for this target.
include src/activities/intro_gravity/CMakeFiles/rcc_intro_gravity.dir/progress.make

src/activities/intro_gravity/CMakeFiles/rcc_intro_gravity: share/gcompris-qt/rcc/intro_gravity.rcc
src/activities/intro_gravity/CMakeFiles/rcc_intro_gravity: src/activities/intro_gravity/intro_gravity.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generate intro_gravity RCC"

share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/ActivityInfo.qml
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/Planet.qml
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/IntroGravity.qml
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/Asteroid.qml
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/intro_gravity.svg
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/intro_gravity.js
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/resource/asteroid2.png
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/resource/background.svg
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/resource/saturn.svg
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/resource/asteroid3.png
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/resource/arrow.svg
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/resource/space_shuttle.svg
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/resource/README
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/resource/neptune.svg
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/resource/tux_spaceship.svg
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/resource/asteroid4.png
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/resource/crash.svg
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/resource/asteroid0.png
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/resource/updown.svg
share/gcompris-qt/rcc/intro_gravity.rcc: /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity/resource/asteroid1.png
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ../../../share/gcompris-qt/rcc/intro_gravity.rcc"
	cd /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity && /home/keith/Qt5.7.0/5.7/gcc_64/bin/rcc -binary -o /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/share/gcompris-qt/rcc/intro_gravity.rcc - < /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/intro_gravity/intro_gravity.qrc

rcc_intro_gravity: src/activities/intro_gravity/CMakeFiles/rcc_intro_gravity
rcc_intro_gravity: share/gcompris-qt/rcc/intro_gravity.rcc
rcc_intro_gravity: src/activities/intro_gravity/CMakeFiles/rcc_intro_gravity.dir/build.make

.PHONY : rcc_intro_gravity

# Rule to build all files generated by this target.
src/activities/intro_gravity/CMakeFiles/rcc_intro_gravity.dir/build: rcc_intro_gravity

.PHONY : src/activities/intro_gravity/CMakeFiles/rcc_intro_gravity.dir/build

src/activities/intro_gravity/CMakeFiles/rcc_intro_gravity.dir/clean:
	cd /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/intro_gravity && $(CMAKE_COMMAND) -P CMakeFiles/rcc_intro_gravity.dir/cmake_clean.cmake
.PHONY : src/activities/intro_gravity/CMakeFiles/rcc_intro_gravity.dir/clean

src/activities/intro_gravity/CMakeFiles/rcc_intro_gravity.dir/depend:
	cd /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/keith/finalwork/GCompris-qt /home/keith/finalwork/GCompris-qt/src/activities/intro_gravity /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/intro_gravity /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/intro_gravity/CMakeFiles/rcc_intro_gravity.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/activities/intro_gravity/CMakeFiles/rcc_intro_gravity.dir/depend
