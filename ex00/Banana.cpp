#include "Banana.h"

Banana::Banana() : Fruit("banana", 5)
{

}

Banana::~Banana()
{
	
}

std::string Banana::getName() const
{
	return (_name);
}

int	Banana::getVitamins() const
{
	return (_vitamins);
}
