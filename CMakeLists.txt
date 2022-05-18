cmake_minimum_required(VERSION 3.21)
project(partial_recap_3)

set(CMAKE_CXX_STANDARD 14)

add_executable(partial_recap_3 main.cpp Task.cpp Task.h Repo.cpp Repo.h Service.cpp Service.h Tests.cpp Tests.h Ui.cpp Ui.h)

set(CMAKE_PREFIX_PATH "C:\\Qt\\6.2.4\\mingw_64\\lib\\cmake")
find_package(Qt6Widgets REQUIRED)
target_link_libraries(partial_recap_3 Qt6::Widgets)

