# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/yhl/software/clion-2018.2.6/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/yhl/software/clion-2018.2.6/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/as/Qt5/clion_qt_test001

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/as/Qt5/clion_qt_test001/build

# Utility rule file for sparsereconstruction_autogen.

# Include the progress variables for this target.
include CMakeFiles/sparsereconstruction_autogen.dir/progress.make

CMakeFiles/sparsereconstruction_autogen: ui_densereconstruction.h
CMakeFiles/sparsereconstruction_autogen: ui_imageshow.h
CMakeFiles/sparsereconstruction_autogen: ui_mainwindow.h
CMakeFiles/sparsereconstruction_autogen: ui_newproject.h
CMakeFiles/sparsereconstruction_autogen: ui_sparsereconstruction.h
CMakeFiles/sparsereconstruction_autogen: ui_videoedit.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/as/Qt5/clion_qt_test001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target sparsereconstruction"
	/home/yhl/software/clion-2018.2.6/bin/cmake/linux/bin/cmake -E cmake_autogen /home/as/Qt5/clion_qt_test001/build/CMakeFiles/sparsereconstruction_autogen.dir/AutogenInfo.cmake Debug

ui_densereconstruction.h: ../qt5.5/src/densereconstruction.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/as/Qt5/clion_qt_test001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_densereconstruction.h"
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/as/Qt5/clion_qt_test001/build/ui_densereconstruction.h /home/as/Qt5/clion_qt_test001/qt5.5/src/densereconstruction.ui

ui_imageshow.h: ../qt5.5/src/imageshow.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/as/Qt5/clion_qt_test001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating ui_imageshow.h"
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/as/Qt5/clion_qt_test001/build/ui_imageshow.h /home/as/Qt5/clion_qt_test001/qt5.5/src/imageshow.ui

ui_mainwindow.h: ../qt5.5/src/mainwindow.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/as/Qt5/clion_qt_test001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating ui_mainwindow.h"
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/as/Qt5/clion_qt_test001/build/ui_mainwindow.h /home/as/Qt5/clion_qt_test001/qt5.5/src/mainwindow.ui

ui_newproject.h: ../qt5.5/src/newproject.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/as/Qt5/clion_qt_test001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating ui_newproject.h"
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/as/Qt5/clion_qt_test001/build/ui_newproject.h /home/as/Qt5/clion_qt_test001/qt5.5/src/newproject.ui

ui_sparsereconstruction.h: ../qt5.5/src/sparsereconstruction.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/as/Qt5/clion_qt_test001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Generating ui_sparsereconstruction.h"
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/as/Qt5/clion_qt_test001/build/ui_sparsereconstruction.h /home/as/Qt5/clion_qt_test001/qt5.5/src/sparsereconstruction.ui

ui_videoedit.h: ../qt5.5/src/videoedit.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/as/Qt5/clion_qt_test001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Generating ui_videoedit.h"
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/as/Qt5/clion_qt_test001/build/ui_videoedit.h /home/as/Qt5/clion_qt_test001/qt5.5/src/videoedit.ui

sparsereconstruction_autogen: CMakeFiles/sparsereconstruction_autogen
sparsereconstruction_autogen: ui_densereconstruction.h
sparsereconstruction_autogen: ui_imageshow.h
sparsereconstruction_autogen: ui_mainwindow.h
sparsereconstruction_autogen: ui_newproject.h
sparsereconstruction_autogen: ui_sparsereconstruction.h
sparsereconstruction_autogen: ui_videoedit.h
sparsereconstruction_autogen: CMakeFiles/sparsereconstruction_autogen.dir/build.make

.PHONY : sparsereconstruction_autogen

# Rule to build all files generated by this target.
CMakeFiles/sparsereconstruction_autogen.dir/build: sparsereconstruction_autogen

.PHONY : CMakeFiles/sparsereconstruction_autogen.dir/build

CMakeFiles/sparsereconstruction_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sparsereconstruction_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sparsereconstruction_autogen.dir/clean

CMakeFiles/sparsereconstruction_autogen.dir/depend:
	cd /home/as/Qt5/clion_qt_test001/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/as/Qt5/clion_qt_test001 /home/as/Qt5/clion_qt_test001 /home/as/Qt5/clion_qt_test001/build /home/as/Qt5/clion_qt_test001/build /home/as/Qt5/clion_qt_test001/build/CMakeFiles/sparsereconstruction_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sparsereconstruction_autogen.dir/depend

