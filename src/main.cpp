#include <iostream>
#include <cstdlib>
#include <ctime>
#include "EnemySpawner.h"
#include "Enemy/ArcherFactory.h"
#include "Enemy/WarriorFactory.h"

int main() {

	srand(time(NULL));
	EnemySpawner Spawner;

	EnemyFactory* archerFactory = new ArcherFactory("snow");
	Spawner.AddEnemyFactory(archerFactory);

	EnemyFactory* warriorFactory = new WarriorFactory("sand");
	Spawner.AddEnemyFactory(warriorFactory);
	std::cout << "how many enemies you want to spawn?" << std::endl;
	int count; std::cin >> count;
	for (int i = 0; i < count; ++i) {
        	Enemy *enemy = Spawner.Spawn();
		std::cout << enemy->Message() << std::endl;
		delete enemy;
	}
	delete archerFactory;
	delete warriorFactory;
	return 0;
}
