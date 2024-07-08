#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
	private:
		std::string _name;
		std::string _title;
		SpellBook _spellbook;

		Warlock( void );
		Warlock( Warlock const &copy );
		Warlock &operator=( Warlock const &copy );

	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock( void );

		void setTitle( std::string const &title );
		void introduce( void ) const;
		void learnSpell( ASpell *spell );
		void forgetSpell( std::string spell );
		void launchSpell( std::string spell, ATarget const &target );

		std::string const &getName() const;
		std::string const &getTitle() const;
};