cmake_minimum_required(VERSION 3.10.3)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(EnemyFactoryTest EnemyFactoryTest.cpp)
target_link_libraries(EnemyFactoryTest ${GTEST_LIBRARIES} pthread ArcherFactory WarriorFactory Enemy Archer Warrior)
add_executable(EnemyTests EnemyTests.cpp)
target_link_libraries(EnemyTests ${GTEST_LIBRARIES} pthread Archer Warrior Enemy)
add_executable(WorldTest WorldTest.cpp)
target_link_libraries(WorldTest ${GTEST_LIBRARIES} pthread  WorldState)
add_executable(SpawnerTest SpawnerTest.cpp)
target_link_libraries(SpawnerTest ${GTEST_LIBRARIES} pthread  ArcherFactory WarriorFactory EnemySpawner Enemy Archer Warrior)

add_test(NAME EnemyFactoryTest COMMAND EnemyFactoryTest)
add_test(NAME EnemyTests COMMAND EnemyTests)
add_test(NAME WorldTest COMMAND WorldTest)
add_test(NAME SpawnerTest COMMAND SpawnerTest)

