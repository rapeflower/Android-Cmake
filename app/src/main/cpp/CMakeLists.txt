# CMake最低版本
cmake_minimum_required(VERSION 3.4.1)
# 将需要打包的资源添加进来
add_library(
        # 库名字
        native_lib
        # 库类型
        SHARED
        # 包含的cpp
        native_lib.cpp
)
find_library(
        log-lib
        log
)
# 链接到项目中
target_link_libraries(
        native_lib
        android
        ${log-lib}
)