cmake_minimum_required(VERSION 3.8)
project(SyDerCal)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp
        DerivableFunction.cpp ../include/DerivableFunction.h
        binary/AddFunction.cpp ../include/binary/AddFunction.h
        Exp.cpp ../include/Exp.h
        binary/MulFunction.cpp ../include/binary/MulFunction.h
        X.cpp ../include/X.h
        Const.cpp ../include/Const.h
        Sin.cpp ../include/Sin.h
        Cos.cpp ../include/Cos.h
        binary/SubFunction.cpp ../include/binary/SubFunction.h
        binary/DivFunction.cpp ../include/binary/DivFunction.h
        binary/PowFunction.cpp ../include/binary/PowFunction.h
        binary/BinaryFunction.cpp ../include/binary/BinaryFunction.h)
add_executable(SyDerCal ${SOURCE_FILES})