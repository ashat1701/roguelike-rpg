#include "army.h"

void Army::AddUnits(const EnemyBuilder* EnemyBuilder, int count) {
	if (count > 0) {
		for (int i = 0; i < count; ++i) {
			Enemies.push_back(EnemyBuilder->Create());
		}
	}
}


