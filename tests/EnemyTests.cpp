#pragma once
#include <gtest/gtest.h>
#include "enemies/Archer.h"

class TestArcher : public testing:Test {
    protected:
        Archer *archer;
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

TEST_F(TestArcher, Test2) {
    ASSERT_EQ(archer->getMana(), 10);
}

class TestMelee : public testing:Test {
    protected:
        Melee *melee;
        void SetUp() {
            melee = new Archer("snow");
            melee->SetMana(10);
            melee->SetHeath(100);
        }
        void TearDown() { delete melee; }
};

TEST_F(TestMelee, Test1) {
    Enemy *pointer = melee;
    ASSERT_EQ(melee->getMana(), pointer->getMana());
}

TEST_F(TestMelee, Test2) {
    ASSERT_EQ(melee->getMana(), 10);
}
