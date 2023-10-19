cmake_minimum_required(VERSION 3.26)
project(Flip)

set(CMAKE_CXX_STANDARD 17)

add_executable(Flip main.cpp
        Card.h
        Deck.h)
