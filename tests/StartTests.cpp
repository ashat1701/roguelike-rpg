#include <gtest/gtest.h>
#include "WorldTest.cpp"
#include "SpawnerTest.cpp"
#include "EnemyFactoryTest.cpp"
#include "EnemyTests.cpp"

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
