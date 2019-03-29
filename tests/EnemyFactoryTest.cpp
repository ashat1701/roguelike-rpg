#pragma once
#include <gtest/gtest.h>
#include "Enemy/ArcherFactory.h"
#include "Enemy/WarriorFactory.h"

class TestArcherFactory : public testing::Test {
    protected:
        ArcherFactory *archerFactory;
        void SetUp() {
            archerFactory = new ArcherFactory("snow");
        }
        void TearDown() { delete archerFactory; }
};

TEST_F(TestArcherFactory, Test1) {
    Enemy *archer = archerFactory->Create();
    ASSERT_EQ(dynamic_cast<Archer *>(archer)->GetType(), "snow");
    delete(archer);
}

class TestWarriorFactory : public testing::Test {
    protected:
        WarriorFactory *warriorFactory;
        void SetUp() {
            warriorFactory = new WarriorFactory("snow");
        }
        void TearDown() { delete warriorFactory; }
};

TEST_F(TestWarriorFactory, Test1) {
    Enemy *warrior = warriorFactory->Create();
    ASSERT_EQ(dynamic_cast<Warrior *>(warrior)->GetType(), "snow");
    delete(warrior);
}
