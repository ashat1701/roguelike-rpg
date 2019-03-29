#pragma once
#include "WorldState.h"
#include "Enemy/EnemyFactory.h"
#include "Enemy/Enemy.h"
#include <vector>

class EnemySpawner {
public:
	void AddEnemyFactory(EnemyFactory* EnemyFactory);
    Enemy* Spawn();
private:
	std::vector<EnemyFactory*> EnemyFactories;
};
