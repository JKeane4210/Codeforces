cmake_minimum_required(VERSION 3.17)
project(Codeforces)

set(CMAKE_CXX_STANDARD 14)

add_executable(Codeforces main.cpp)
add_executable(14A GlobalRound14/ProblemA.cpp)
add_executable(14B GlobalRound14/ProblemB.cpp)
add_executable(14D GlobalRound14/ProblemD.cpp)
add_executable(14C GlobalRound14/ProblemC.cpp)
add_executable(14Cb GlobalRound14/ProblemCAlternate.cpp)

add_executable(Duel1 Duels/Duel1.cpp)
add_executable(Duel2 Duels/Duel2b.cpp)
add_executable(Duel3 Duels/Duel3.cpp)
add_executable(SM_Duel Duels/Sam_Mitchell_Duel.cpp)
add_executable(Duel4 Duels/Duel4.cpp)
