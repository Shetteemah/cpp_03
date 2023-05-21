#include "../include/ScavTrap.hpp"

// ScavTrap Implementation

/*constructors*/
/*default constructors*/
ScavTrap::ScavTrap(): ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    this->_guardingGate = 0;
    std::cout << "[ScavTrap]\tdefualt constructor has been called" << std::endl; 
}
/*copy constructor*/
ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
    this->_guardingGate = copy._guardingGate;
    std::cout << "[ScavTrap]\tcopy constructor has been called!" << std::endl;
}
/*constructor that takes a string*/
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    this->_guardingGate = 0;
    std::cout << "[ScavTrap]\tconstructor for " << this->_name << " has been called" << std::endl;
}
/*destructor*/
ScavTrap::~ScavTrap()
{
    std::cout << "[ScavTrap]\tdestructor for " << this->_name << " has been called" << std::endl; 
}
/*overload operators*/
ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "[ScavTrap]\t" << "assignment operator called... " << std::endl;
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    std::cout << "assignment successful!" << std::endl;
    return (*this);
}
/*public methods*/
void    ScavTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints)
    {
        this->_energyPoints -= 1;
        std::cout << "[ScavTrap]\t" << this->_name << " attacked " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
        std::cout << "\t\t" << this->_name << " lost 1 energy point and now has " << this->_energyPoints << " energy points." << std::endl;
    }
    else if (this->_energyPoints == 0)
        std::cout << "[ScavTrap]\t" << this->_name << " doesn't have enough energy to attack " << target << std::endl;
    else
        std::cout << "[ScavTrap]\t" << this->_name << " doesn't have enough hit points to attack " << target << std::endl;
}

void    ScavTrap::guardGate(void)
{
    if (this->_guardingGate == 0)
    {
        this->_guardingGate = 1;
        std::cout << "[ScavTrap]\t" << this->_name << " is now guarding the gate." << std::endl;
    }
    else
        std::cout << "[ScavTrap]\t" << this->_name << " is already guarding the gate." << std::endl;
}