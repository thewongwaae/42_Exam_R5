#pragma once
#include "ASpell.hpp"
#include <map>

class ASpell;

class SpellBook {
	private:
		std::map<std::string, ASpell*> _spells;

		SpellBook( SpellBook const &copy );
		SpellBook &operator=( SpellBook const &copy );

	public:
		SpellBook( void );
		~SpellBook( void );

		void learnSpell( ASpell *spell );
		void forgetSpell( std::string const &spell );
		ASpell *createSpell( std::string const &spell );
};