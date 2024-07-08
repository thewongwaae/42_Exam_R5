#include "SpellBook.hpp"

SpellBook::SpellBook( void ) { }

SpellBook::~SpellBook( void ) { }

SpellBook::SpellBook( SpellBook const &copy ) {
	*this = copy;
}

SpellBook &SpellBook::operator=( SpellBook const &copy ) {
	(void) copy;
	return *this;
}

void SpellBook::learnSpell( ASpell *spell ) {
	if (spell)
		if (_spells.find(spell->getName()) == _spells.end())
			_spells[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell( std::string const &spell ) {
	if (_spells.find(spell) != _spells.end())
		_spells.erase(_spells.find(spell));
}

ASpell *SpellBook::createSpell( std::string const &spell ) {
	if (_spells.find(spell) != _spells.end())
		return _spells[spell];
	return NULL;
}