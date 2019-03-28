#pragma once
#include <gtest/gtest.h>
#include "WorldState.h"

class TestWorld : public testing:Test {
    protected:
        WorldState *state;
        void SetUp() {
            state = new WorldState();
        }
        void TearDown() { delete state; }
};

TEST_F(TestArcher, Test1) {
    WorldState state2 = WorldState.getInstance();
    ASSERT_EQ(*state2, state);
}
