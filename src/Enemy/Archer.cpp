#include "Archer.h"

Archer::Archer(const std::string & type) {
	this->type = type;
}

std::string Archer::Message() const {
	return "I am Archer!";
}