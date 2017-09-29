cmake_minimum_required(VERSION 3.8)
project(SyDerCal)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp DerivableFunction.cpp DerivableFunction.h AddFunction.cpp AddFunction.h Exp.cpp Exp.h MulFunction.cpp MulFunction.h X.cpp X.h Const.cpp Const.h Sin.cpp Sin.h Cos.cpp Cos.h)
add_executable(SyDerCal ${SOURCE_FILES} Sin.cpp Sin.h Cos.cpp Cos.h)