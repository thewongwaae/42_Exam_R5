#include <iostream>

class Warlock {
	private:
		std::string _name;
		std::string _title;

		Warlock( void );
		Warlock( Warlock const &copy );
		Warlock &operator=( Warlock const &copy );

	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock( void );

		void setTitle( std::string const &title );
		void introduce( void ) const;

		std::string const &getName() const;
		std::string const &getTitle() const;
};