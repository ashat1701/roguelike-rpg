#include "world-state.h"

WorldState& WorldState::GetInstance() {
	static WorldState instance;
	return instance;
}
