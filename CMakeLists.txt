cmake_minimum_required(VERSION 4.2)
project(Daimayuan_Zhousai_Problem)

set(CMAKE_CXX_STANDARD 20)

add_executable(Daimayuan_Zhousai_Problem main.cpp
        R60/[R60A]喝牛奶.cpp
        R60/[R60B]均摊.cpp
        "R60/[R60D]药品(0分WA).cpp"
        "R14/[R14D]训练指令2(40分RE).cpp"
        "R5/[R5E]余数和(40分TLE).cpp"
        R27/[R27C]服务窗口.cpp
        "R32/[R32C]奇偶更新(0分RE).cpp"
        "R39/[R39B]倍数(0分TLE).cpp"
        "R44/[R44C]贺卡(0分TLE).cpp"
        "R45/[R45C]会议和沙威玛(0分WA).cpp"
        "R60/[R60C]加(0分TLE).cpp"
        "R25/[R25B]Ferrers 图.cpp"
        R61/[R61A]四季.cpp
        R61/[R61B]墙.cpp)
