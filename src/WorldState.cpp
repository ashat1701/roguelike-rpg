#include "WorldState.h"

WorldState& WorldState::GetInstance() {
	static WorldState instance;
	return instance;
}
