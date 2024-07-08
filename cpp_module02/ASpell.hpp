#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
	protected:
		std::string _name;
		std::string _effects;

	public:
		ASpell( std::string name, std::string effects );
		virtual ~ASpell( void );
		ASpell( ASpell const &copy );
		ASpell &operator=( ASpell const &copy );

		virtual ASpell *clone() const = 0;

		void launch( ATarget const &target ) const;

		std::string getName( void ) const;
		std::string getEffects( void ) const;
};