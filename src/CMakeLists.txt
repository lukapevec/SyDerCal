cmake_minimum_required(VERSION 3.8)
project(SyDerCal)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp
        DerivableFunction.cpp ../include/DerivableFunction.h
        func/AddFunction.cpp ../include/func/AddFunction.h
        Exp.cpp ../include/Exp.h
        func/MulFunction.cpp ../include/func/MulFunction.h
        X.cpp ../include/X.h
        Const.cpp ../include/Const.h
        Sin.cpp ../include/Sin.h
        Cos.cpp ../include/Cos.h
        func/SubFunction.cpp ../include/func/SubFunction.h
        func/DivFunction.cpp ../include/func/DivFunction.h
        func/PowFunction.cpp ../include/func/PowFunction.h
        BinaryFunction.cpp ../include/BinaryFunction.h)
add_executable(SyDerCal ${SOURCE_FILES})