cmake_minimum_required(VERSION 4.2)
project(Daimayuan_Zhousai_Problem)

set(CMAKE_CXX_STANDARD 20)

add_executable(Daimayuan_Zhousai_Problem main.cpp
        R60/[R60A]喝牛奶.cpp
        R60/[R60B]均摊.cpp
        R60/[R60D]药品None.cpp
        "R14/[R14D]训练指令2(40分RE).cpp")
