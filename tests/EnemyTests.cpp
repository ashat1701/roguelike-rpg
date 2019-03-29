#include <gtest/gtest.h>
#include "Enemy/Archer.h"
#include "Enemy/Warrior.h"

class TestArcher : public testing::Test {
    protected:
        Archer *archer;
        void SetUp() {
            archer = new Archer("snow");
            archer->SetMana(10);
            archer->SetHealth(100);
        }
        void TearDown() { delete archer; }
};

TEST_F(TestArcher, Test1) {
    Enemy *pointer = archer;
    ASSERT_EQ(archer->GetMana(), pointer->GetMana());
}

TEST_F(TestArcher, Test2) {
    ASSERT_EQ(archer->GetMana(), 10);
}

class TestWarrior : public testing::Test {
    protected:
        Warrior *warrior;
        void SetUp() {
            warrior = new Warrior("sand");
            warrior->SetMana(10);
            warrior->SetHealth(100);
        }
        void TearDown() { delete warrior; }
};

TEST_F(TestWarrior, Test1) {
    Enemy *pointer = warrior;
    ASSERT_EQ(warrior->GetMana(), pointer->GetMana());
}

TEST_F(TestWarrior, Test2) {
    ASSERT_EQ(warrior->GetMana(), 10);
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
