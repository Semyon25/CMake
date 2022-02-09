cmake_minimum_required(VERSION 3.11)

project(MyProject)

set(CMAKE_CXX_FLAGS_DUBUG_INIT "-Wall")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#-----------------------------------------------------------------------------------------------------

# Устанавливаем флаги линковки boost библиотеки
set(Boost_USE_STATIC_LIBS OFF) 
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME OFF) 
# Указываем необходимые модули библиотеки
find_package(Boost 1.78.0 COMPONENTS date_time REQUIRED)


if(Boost_FOUND)
    message("Boost was found!")
endif()

set(SOURCES main.cpp)

# Подключаем директорию с заголовочными файлами библиотеки 
include_directories(${Boost_INCLUDE_DIRS}) 

add_executable(${PROJECT_NAME} ${SOURCES})

# Линкуем таргет с библиотекой boost
target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})