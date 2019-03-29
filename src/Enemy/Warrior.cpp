#include "Warrior.h"

Warrior::Warrior(const std::string & type) {
	this->type = type;
}

std::string Warrior::Message() const {
	return "I am Warrior!";
}