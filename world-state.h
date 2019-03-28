#pragma once
class WorldState {
private:
	WorldState() = default;
	WorldState(WorldState&) = delete;
	WorldState& operator=(WorldState&) = delete;
public:
	static WorldState& GetInstance();
};