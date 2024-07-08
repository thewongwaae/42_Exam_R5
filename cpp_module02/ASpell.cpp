#include "ASpell.hpp"

ASpell::ASpell( std::string name, std::string effects ) : _name(name), _effects(effects) { }

ASpell::~ASpell( void ) { }

ASpell::ASpell( ASpell const &copy ) {
	*this = copy;
}

ASpell &ASpell::operator=( ASpell const &copy ) {
	if (this != &copy) {
		this->_name = copy._name;
		this->_effects = copy._effects;
	}

	return *this;
}

void ASpell::launch( ATarget const &target ) const {
	target.getHitBySpell(*this);
}

std::string ASpell::getName( void ) const {
	return this->_name;
}

std::string ASpell::getEffects( void ) const {
	return this->_effects;
}