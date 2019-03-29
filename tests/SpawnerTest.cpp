#pragma once
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
    ASSERT_NO_THROW(1 / (dynamic_cast<Archer *>(enemy)->GetType() == "sand"));
    // TODO: Fix this sh*t
}


