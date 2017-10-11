cmake_minimum_required(VERSION 3.8)
project(SyDerCal)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp
        DerivableFunction.cpp ../include/DerivableFunction.h
        binary/AddFunction.cpp ../include/binary/AddFunction.h
        unary/Exp.cpp ../include/unary/Exp.h
        binary/MulFunction.cpp ../include/binary/MulFunction.h
        nullary/X.cpp ../include/nullary/X.h
        nullary/Const.cpp ../include/nullary/Const.h
        unary/Sin.cpp ../include/unary/Sin.h
        unary/Cos.cpp ../include/unary/Cos.h
        binary/SubFunction.cpp ../include/binary/SubFunction.h
        binary/DivFunction.cpp ../include/binary/DivFunction.h
        binary/PowFunction.cpp ../include/binary/PowFunction.h
        binary/BinaryFunction.cpp ../include/binary/BinaryFunction.h unary/UnaryFunction.cpp ../include/unary/UnaryFunction.h nullary/NullaryFunction.cpp ../include/nullary/NullaryFunction.h)
add_executable(SyDerCal ${SOURCE_FILES})