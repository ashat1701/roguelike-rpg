#include "EnemySpawner.h"

void EnemySpawner::AddEnemyFactory(EnemyFactory* EnemyFactory) {
    EnemySpawner::EnemyFactories.push_back(EnemyFactory);
}


// TODO: Implement Spawn() method to test it
