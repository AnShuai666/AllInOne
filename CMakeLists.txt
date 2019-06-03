cmake_minimum_required(VERSION 3.5)
project(clion_qt_test001)

set(CMAKE_CXX_STANDARD 11)
#clion 打开这qtcreator关闭
cmake_policy(SET CMP0071 NEW)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
message(STATUS ${CMAKE_INCLUDE_CURRENT_DIR})

option(TESTS_ENABLED "添加测试" OFF)
set(TESTS_ENABLED ON)
message(STATUS ${TESTS_ENABLED})
if (TESTS_ENABLED)
    message(STATUS "允许编译测试文件")
    enable_testing()
endif ()
macro(QT_ADD_TEST TARGET_NAME)
    if (TESTS_ENABLED)
        message(STATUS "zhene")
        add_executable(${TARGET_NAME} ${ARGN})
        target_link_libraries(${TARGET_NAME} ${Boost_LIBRARIES})
        set_target_properties(${TARGET_NAME} PROPERTIES FOLDER
                ${CMAKE_CURRENT_SOURCE_DIR}/bin)
        add_test("bin/${TARGET_NAME}" ${TARGET_NAME})
    endif ()
endmacro()

#打开Qt的MOC功能和UI文件处理功能
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

find_package(Boost REQUIRED COMPONENTS
        program_options
        filesystem
        graph
        system
        unit_test_framework
        )
#查找Qt的库
find_package(Qt5 5.4 REQUIRED COMPONENTS
        Core
        OpenGL
        Widgets
        Gui
        )

if(Qt5_FOUND)
    message(STATUS "Found Qt")
    message(STATUS "  Module : ${Qt5Core_DIR}")
    message(STATUS "  Module : ${Qt5OpenGL_DIR}")
    message(STATUS "  Module : ${Qt5Widgets_DIR}")
    message(STATUS "  Module : ${Qt5Gui_DIR}")
    message(STATUS "  Library : ${Qt5Core_LIBRARIES}")
    message(STATUS "  Library : ${Qt5OpenGL_LIBRARIES}")
    message(STATUS "  Library : ${Qt5Widgets_LIBRARIES}")
    message(STATUS "  Library : ${Qt5Gui_LIBRARIES}")
endif()
include_directories(${Qt5Gui_INCLUDE_DIRS})
include_directories(${Qt5Core_INCLUDE_DIRS})
include_directories(${Qt5OpenGL_INCLUDE_DIRS})
include_directories(${Qt5Widgets_INCLUDE_DIRS})
set(SOURCE_FILES main01.cpp mouse.cpp mouse.h)

#查找OPENGL库
find_package(OpenGL REQUIRED)
include_directories(${OpenGL_INCLUDE_DIR})

find_package(MATH REQUIRED)
include_directories(${MATH_INCLUDE_SIRS})
add_executable(Widget ${SOURCE_FILES})
target_link_libraries(Widget Qt5::Widgets)

#何时用？
#qt5_wrap_cpp(QT5_SRC qt5.5/src/mainwindow.h qt5.5/src/sparsereconstruction.h)
qt5_wrap_ui(QT5_UI
        qt5.5/src/mainwindow.ui
        qt5.5/src/sparsereconstruction.ui
        qt5.5/src/densereconstruction.ui
        qt5.5/src/videoedit.ui
        qt5.5/src/newproject.ui
        qt5.5/src/imageshow.ui
        )
MESSAGE(STATUS "QT5_SRC")
message(STATUS ${QT5_SRC})
MESSAGE(STATUS "QT5_UI")
message(STATUS ${QT5_UI})
#需要解决.ui文件必须跟src文件一起的问题
add_executable(sparsereconstruction
        qt5.5/src/main.cpp
        qt5.5/src/mainwindow.cpp
        qt5.5/src/sparsereconstruction.cpp
        qt5.5/src/densereconstruction.cpp
        qt5.5/src/videoedit.cpp
        qt5.5/src/newproject.cpp
        qt5.5/src/imageshow.cpp
        qt5.5/src/mainwindow.h
        qt5.5/src/sparsereconstruction.h
        qt5.5/src/densereconstruction.h
        qt5.5/src/videoedit.h
        qt5.5/src/newproject.h
        qt5.5/src/imageshow.h
        ${QT5_SRC}
        ${QT5_UI}
        )
qt5_use_modules(sparsereconstruction
        Widgets
        Gui
        Core
        OpenGL)
#target_link_libraries(sparsereconstruction
#        Qt5::Widgets
 #       Qt5::Gui
  #      Qt5::Core
   #     Qt5::OpenGL
    #    )

add_executable(function stdfunction.cpp)

include_directories(/home/as/MATH/include)
add_executable(opengl_example opengl_example.cpp)
target_link_libraries(opengl_example GL GLU glut GLEW)



message(STATUS ${OPENGL_INCLUDE_DIRS})
message(STATUS ${OPENGL_gl_LIBRARY})
message(STATUS ${OPENGL_glu_LIBRARY})
message(STATUS ${OPENGL_LIBRARY})
message(STATUS ${OPENGL_GLEW_LIBRARY})

QT_ADD_TEST(QT_TEST001 qt_test001.cpp)
QT_ADD_TEST(QT_TEST002 qt_test002.cpp)
