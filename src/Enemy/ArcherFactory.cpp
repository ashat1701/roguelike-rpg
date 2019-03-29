#include "ArcherFactory.h"

ArcherFactory::ArcherFactory(const std::string & type) {
	this->type = type;
}

Archer* ArcherFactory::Create() const {
	return new Archer(type);
}
