#pragma once
#include <gtest/gtest.h>
#include "WorldState.h"

class TestWorld : public testing::Test {
    protected:
        WorldState *state;
        void SetUp() {
            state =  &(WorldState::GetInstance());
        }
        void TearDown() { delete state; }
};

TEST_F(TestWorld, Test1) {
    WorldState &state2 = WorldState::GetInstance();
    ASSERT_EQ(&state2, state);
}
