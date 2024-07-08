#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	protected:
		std::string _type;

	public:
		ATarget( std::string type );
		virtual ~ATarget( void );
		ATarget( ATarget const &copy );
		ATarget &operator=( ATarget const &copy );

		virtual ATarget *clone() const = 0;

		void getHitBySpell( ASpell const &spell ) const;

		std::string getType( void );
};