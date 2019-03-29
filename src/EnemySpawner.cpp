#include "EnemySpawner.h"
#include <random>
#include <stdexcept>
#include <cstdlib>
#include <iostream>

void EnemySpawner::AddEnemyFactory(EnemyFactory* EnemyFactory) {
    EnemySpawner::EnemyFactories.push_back(EnemyFactory);
}


Enemy* EnemySpawner::Spawn() {
	if (EnemyFactories.size() == 0) {
		throw std::out_of_range("Empty Spawner");
	}

	int index = rand() % EnemyFactories.size();

	return EnemyFactories[index]->Create();
}


// TODO: create empty spawner exception
