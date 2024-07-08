#pragma once
#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator {
	private:
		std::map<std::string, ATarget*> _targets;

		TargetGenerator( TargetGenerator const &copy );
		TargetGenerator &operator=( TargetGenerator const &copy );

	public:
		TargetGenerator( void );
		~TargetGenerator( void );

		void learnTargetType( ATarget *target );
		void forgetTargetType( std::string const &target );
		ATarget *createTarget( std::string const &target );
};