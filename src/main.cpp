#include <iostream>
#include "EnemySpawner.h"

int main() {
	EnemySpawner Spawner;

	EnemyFactory* ArcherFactory = new ArcherFactory();
	Spawner.AddEnemyFactory(ArcherFactory);

	EnemyFactory* WarriorFactory = new WarriorFactory();
	Spawner.AddEnemyFactory(WarriorFactory);
	std::cout << "how many enemies you want to spawn?" << std::endl;
	int count; std::cin >> count;
	for (int i = 0; i < count; ++i) {
		std::cout << Spawner.Spawn()->Message() << std::endl;
	}
	return 0;
}