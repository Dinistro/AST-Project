find_package(LLVM REQUIRED)
find_package(Clang REQUIRED)
#find_package(CLANG_LIBS REQUIRED)

set(CMAKE_CXX_FLAGS "-Wall -g3 -O0 -std=c++17 -fno-rtti ${LLVM_COMPILE_FLAGS}")

include_directories(${LLVM_INCLUDE_DIRS})
include_directories(${CLANG_INCLUDE_DIRS})

set(CLANG_LIBS
    clangAST
    clangBasic
    clangFrontend
    clangLex
    clangSerialization
    clangTooling
    )


# remove trailing whitespaces
#string(STRIP ${LLVM_LDFLAGS} LLVM_LDFLAGS)

add_executable(ast-project 
    Main.cpp
    LoopConverter.cpp
)
target_link_libraries(ast-project ${CLANG_LIBS} ${LLVM_LIBS_CORE} ${LLVM_LDFLAGS})
