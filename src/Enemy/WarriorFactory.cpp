#include "WarriorFactory.h"

WarriorFactory::WarriorFactory(const std::string & type) {
	this->type = type;
}

Warrior * WarriorFactory::Create() const {
	return new Warrior(type);
}
