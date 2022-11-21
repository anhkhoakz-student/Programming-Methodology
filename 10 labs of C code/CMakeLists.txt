cmake_minimum_required(VERSION 3.23)
project(10_labs_of_C_code C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories("lab 01")
include_directories("lab 02")
include_directories("lab 03")

add_executable(10_labs_of_C_code
        "lab 01/ex1.c"
        "lab 01/ex10.c"
        "lab 01/ex11.c"
        "lab 01/ex12.c"
        "lab 01/ex2.c"
        "lab 01/ex3.c"
        "lab 01/ex4.c"
        "lab 01/ex5.c"
        "lab 01/ex6.c"
        "lab 01/ex7.c"
        "lab 01/ex8.c"
        "lab 01/ex9.c"
        "lab 02/bai15.c"
        "lab 02/bai16.c"
        "lab 02/bai17.c"
        "lab 02/bai18.c"
        "lab 02/bai19.c"
        "lab 02/bai4.c"
        "lab 02/bai5_bai10.c"
        "lab 03/lab3.c"
        "lab 03/test.c")
