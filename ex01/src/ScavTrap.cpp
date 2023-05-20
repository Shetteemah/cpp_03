#include "../include/ScavTrap.hpp"

// ScavTrap Implementation

/*constructors*/
/*default constructors*/
ScavTrap::ScavTrap(): ClapTrap()
{
    this->_hitPoints 
}
/*copy constructor*/
ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{

}
/*constructor that takes a string*/
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{

}
/*destructor*/
ScavTrap::~ScavTrap()
{

}
/*overload operators*/
ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{

}
/*public methods*/
void    ScavTrap::attack(const ScavTrap &target)
{

}

void    ScavTrap::guardGate(void)
{
    
}