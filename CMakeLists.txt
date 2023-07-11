cmake_minimum_required(VERSION 3.25)
project(decorator)

set(CMAKE_CXX_STANDARD 23)

add_executable(decorator main.cpp include/Component.hpp src/ConcreteComponent.cpp include/ConcreteComponent.hpp src/Decorator.cpp include/Decorator.hpp src/ConcreteDecoratorA.cpp include/ConcreteDecoratorA.hpp src/ConcreteDecoratorB.cpp include/ConcreteDecoratorB.hpp)
