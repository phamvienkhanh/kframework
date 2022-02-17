cmake_minimum_required(VERSION 3.22.1)
project(kframework VERSION 0.1.0)

include_directories(${CMAKE_SOURCE_DIR}/include
                    ${CMAKE_SOURCE_DIR}/3rd/imgui
                    ${CMAKE_SOURCE_DIR}/3rd/imgui/backends
                    ${CMAKE_SOURCE_DIR}/3rd/spdlog/include)

set(IMGUI_SOURCE ${CMAKE_SOURCE_DIR}/3rd/imgui/imgui_demo.cpp
                 ${CMAKE_SOURCE_DIR}/3rd/imgui/imgui_draw.cpp
                 ${CMAKE_SOURCE_DIR}/3rd/imgui/imgui_tables.cpp
                 ${CMAKE_SOURCE_DIR}/3rd/imgui/imgui_widgets.cpp
                 ${CMAKE_SOURCE_DIR}/3rd/imgui/imgui.cpp
                 ${CMAKE_SOURCE_DIR}/3rd/imgui/imgui_demo.cpp
                 ${CMAKE_SOURCE_DIR}/3rd/imgui/TextEditor.cpp
                 ${CMAKE_SOURCE_DIR}/3rd/imgui/backends/imgui_impl_glfw.cpp
                 ${CMAKE_SOURCE_DIR}/3rd/imgui/backends/imgui_impl_opengl3.cpp)
                

file(GLOB SOURCE ${CMAKE_SOURCE_DIR}/source/*.cpp)

add_executable(kframework ${SOURCE} ${IMGUI_SOURCE})
target_link_libraries(kframework -lGL -lglfw -ldl)
