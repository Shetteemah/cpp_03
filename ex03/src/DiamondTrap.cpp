#include "../include/DiamondTrap.hpp"

/*default constructor*/
DiamondTrap::DiamondTrap(): ClapTrap("default")
{
    this->_name = "diamondDefault";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "[DiamondTrap]\tdefualt constructor has been called.\n" << std::endl;
}
/*copy constructor*/
DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    *this = copy;
}
/*constructor that takes a string*/
DiamondTrap::DiamondTrap(std::string name)
{
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "[DiamondTrap]\tconstructor using string has been called.\n" << std::endl;
}
/*destructor*/
DiamondTrap::~DiamondTrap()
{
    std::cout << "[DiamondTrap]\tdestructor has been called.\n" << std::endl;
}
/*overload operator*/
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    std::cout << "[DiamondTrap]\t" << "assignment operator called... " << std::endl;
    this->_name = src._name + "_clap_name";
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    std::cout << "assignment successful!" << std::endl;
    return (*this);
}
/*public method*/
void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void    whoAmI()
{
    std::cout << "You're now interacting with DiamondTrap called " << this->_name << ", from a ClapTrap clan called " << ClapTrap::_name << "." << std::endl;
}
