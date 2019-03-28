#include "warrior-builder.h"

WarriorBuilder::WarriorBuilder(const std::string & type) {
	this->type = type;
}

Warrior * WarriorBuilder::Create() const {
	return new Warrior(type);
}
