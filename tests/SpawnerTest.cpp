#include <gtest/gtest.h>
#include "EnemySpawner.h"
#include "Enemy/ArcherFactory.h"
#include "Enemy/WarriorFactory.h"

class TestSpawner : public testing::Test {
    protected:
        EnemySpawner *spawner;
        void SetUp() {
            spawner = new EnemySpawner();
        }
        void TearDown() { delete spawner; }
};

TEST_F(TestSpawner, Test1) {
    ArcherFactory *factory = new ArcherFactory("sand");
    spawner->AddEnemyFactory(factory);
    Enemy *enemy = spawner->Spawn(); 
    delete(factory);
    ASSERT_NO_THROW(1 / (dynamic_cast<Archer *>(enemy)->GetType() == "sand"));
    delete(enemy);
    // TODO: Fix this sh*t
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
