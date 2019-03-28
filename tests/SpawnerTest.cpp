#pragma once
#include <gtest/gtest.h>
#include "Spawner.h"

class TestSpawner : public testing:Test {
    protected:
        Spawner *archer;
        void SetUp() {
            archer = new Archer("snow");
            archer->SetMana(10);
            archer->SetHeath(100);
        }
        void TearDown() { delete archer; }
};

TEST_F(TestArcher, Test1) {
    Enemy *pointer = archer;
    ASSERT_EQ(archer->getMana(), pointer->getMana());
}


