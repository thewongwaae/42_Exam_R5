#include "Warlock.hpp"

Warlock::Warlock( void ) { }

Warlock::Warlock( Warlock const &copy ) {
	*this = copy;
}

Warlock &Warlock::operator=( Warlock const &copy ) {
	if (this != &copy) {
		this->_name = copy._name;
		this->_title = copy._title;
	}
	
	return *this;
}

Warlock::Warlock( std::string const &name, std::string const &title ) : _name(name), _title(title) {
	std::cout << name + ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock( void ) {
	std::cout << this->_name + ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const {
	return this->_name;
}

std::string const &Warlock::getTitle() const {
	return this->_title;
}

void Warlock::setTitle( std::string const &title ) {
	this->_title = title;
}

void Warlock::introduce( void ) const {
	std::cout << this->_name + ": I am " + this->_name + ", " + this->_title + "!" << std::endl;
}
