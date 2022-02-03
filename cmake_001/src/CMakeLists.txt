# Указание необходимой версии cmake
cmake_minimum_required(VERSION 3.11)

# Название проекта
project(MyProject)

# Устанавливаем команду компилятору в debug режиме: "-Wall" говорит выводить все предупреждения
set(CMAKE_CXX_FLAGS_DUBUG_INIT "-Wall")

# Устанавливаем команду компилятору: включает поддержку стандарта c++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Можно задать стандарт таким образом
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

#-----------------------------------------------------------------------------------------------------

# Можно создать переменную SOURCES при помощи явного перечисления всех файлов
set(SOURCES main.cpp)

# Добавить в сборку исполняемый файл
add_executable(MyProject ${SOURCES})