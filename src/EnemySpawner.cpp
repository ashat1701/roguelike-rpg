#include "EnemySpawner.h"
#include <random>
#include <stdexcept>

void EnemySpawner::AddEnemyFactory(EnemyFactory* EnemyFactory) {
    EnemySpawner::EnemyFactories.push_back(EnemyFactory);
}


Enemy* EnemySpawner::Spawn() {
	if (EnemyFactories.size() == 0) {
		throw std::out_of_range("Empty Spawner");
	}
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(0, EnemyFactories.size() - 1);
	int index = distribution(generator);
	return EnemyFactories[index]->Create();
}


// TODO: create empty spawner exception
