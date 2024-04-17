cmake_minimum_required(VERSION 3.20.0)
project(planning)
set(CMAKE_CXX_STANDARD 11)

# include_directories(${PROJECT_SOURCE_DIR}/include)
# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) #linux下将.so文件和.out文件放到该目录下
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin) #win下将dll和exe都放到这个目录下
# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY 位置) #设置.a静态库 不会同事将可执行文件耶放在里面，则需要搭配output_path来使用

aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LISTS)
add_library(
    common
    SHARED
    ${SRC_LISTS}
)

target_include_directories(
    common
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

add_executable(planning_main planning_main.cpp)

target_include_directories(
    planning_main
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(
    planning_main
    PUBLIC
    common
)

