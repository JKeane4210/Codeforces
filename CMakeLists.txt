cmake_minimum_required(VERSION 3.17)
project(Codeforces)

set(CMAKE_CXX_STANDARD 14)

add_executable(Codeforces main.cpp)

# Global Round 14
add_executable(14A GlobalRound14/ProblemA.cpp)
add_executable(14B GlobalRound14/ProblemB.cpp)
add_executable(14D GlobalRound14/ProblemD.cpp)
add_executable(14C GlobalRound14/ProblemC.cpp)
add_executable(14Cb GlobalRound14/ProblemCAlternate.cpp)

# Duels
add_executable(Duel1 Duels/Duel1.cpp)
add_executable(Duel2 Duels/Duel2b.cpp)
add_executable(Duel3 Duels/Duel3.cpp)
add_executable(SM_Duel Duels/Sam_Mitchell_Duel.cpp)
add_executable(Duel4 Duels/Duel4.cpp)
add_executable(Duel5 Duels/Duel5.cpp)

add_executable(DivanAndAStore PracticeProblems/DivanAndAStore.cpp)
add_executable(DivanAndANewProject PracticeProblems/DivanAndANewProject.cpp)
add_executable(DivanAndBitwiseOperations PracticeProblems/DivanAndBitwiseOperations.cpp)
add_executable(PosionedDagger PracticeProblems/PoisonedDagger.cpp)
add_executable(MEXSequences PracticeProblems/MEXSequences.cpp)
add_executable(NotQuiteLee PracticeProblems/NotQuiteLee.cpp)

# Educational Round 120 (Rated for Div. 2)
add_executable(120_A EducationalRound120_Div2/ProblemA.cpp)
add_executable(120_B EducationalRound120_Div2/ProblemB.cpp)
add_executable(120_C EducationalRound120_Div2/ProblemC_Redo.cpp)
add_executable(120_D EducationalRound120_Div2/ProblemD.cpp)
add_executable(120_E EducationalRound120_Div2/ProblemE.cpp)
add_executable(120_F EducationalRound120_Div2/ProblemF.cpp)

# Goodbye 2021: 2022 is NEAR
add_executable(GoodBye2021_A GoodBye2021/ProblemA.cpp)
add_executable(GoodBye2021_B GoodBye2021/ProblemB.cpp)
add_executable(GoodBye2021_C GoodBye2021/ProblemC.cpp)