#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator( void ) { }

TargetGenerator::~TargetGenerator( void ) { }

TargetGenerator::TargetGenerator( TargetGenerator const &copy ) {
	*this = copy;
}

TargetGenerator &TargetGenerator::operator=( TargetGenerator const &copy ) {
	(void) copy;
	return *this;
}

void TargetGenerator::learnTargetType( ATarget *target ) {
	if (target)
		if (_targets.find(target->getType()) == _targets.end())
			_targets[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType( std::string const &target ) {
	if (_targets.find(target) != _targets.end())
		_targets.erase(_targets.find(target));
}

ATarget *TargetGenerator::createTarget( std::string const &target ) {
	if (_targets.find(target) != _targets.end())
		return _targets[target];
	return NULL;
}