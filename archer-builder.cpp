#include "archer-builder.h"

ArcherBuilder::ArcherBuilder(const std::string & type) {
	this->type = type;
}

Archer* ArcherBuilder::Create() const {
	return new Archer(type);
}
