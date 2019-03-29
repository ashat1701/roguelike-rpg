cmake_minimum_required(VERSION 2.6)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(executeTests StartTests.cpp)
target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread Enemy Archer EnemyFactory ArcherFactory Warrior WarriorFactory EnemySpawner WorldState)

