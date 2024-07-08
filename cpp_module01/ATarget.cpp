#include "ATarget.hpp"

ATarget::ATarget( std::string type ) : _type(type) { }

ATarget::~ATarget( void ) { }

ATarget::ATarget( ATarget const &copy ) {
	*this = copy;
}

ATarget &ATarget::operator=( ATarget const &copy ) {
	if (this != &copy) {
		this->_type = copy._type;
	}

	return *this;
}

void ATarget::getHitBySpell( ASpell const &spell ) const {
	std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
}

std::string ATarget::getType( void ) {
	return this->_type;
}