#include "EnemySpawner.h"

void EnemySpawner::AddEnemyFactory(const EnemyFactory* EnemyFactory) {
    EnemySpawner::EnemyFactories.push_back(EnemyFactory);
}


