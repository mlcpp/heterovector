add_dependencies(examples
    append
    clear
    copy
    count 
    size
)
add_executable(append append.cpp)
add_executable(clear clear.cpp)
add_executable(copy copy.cpp)
add_executable(count count.cpp)
add_executable(size size.cpp)