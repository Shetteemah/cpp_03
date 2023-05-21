#include "../include/FragTrap.hpp"

// FragTrap Implementation

/*constructors*/
/*default constructors*/
FragTrap::FragTrap(): ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "[FragTrap]\tdefualt constructor has been called" << std::endl; 
}
/*copy constructor*/
FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
    std::cout << "[FragTrap]\tcopy constructor has been called!" << std::endl;
}
/*constructor that takes a string*/
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "[FragTrap]\tconstructor for " << this->_name << " has been called" << std::endl;
}
/*destructor*/
FragTrap::~FragTrap()
{
    std::cout << "[FragTrap]\tdestructor for " << this->_name << " has been called" << std::endl; 
}
/*overload operators*/
FragTrap &FragTrap::operator=(const FragTrap &src)
{
    std::cout << "[FragTrap]\t" << "assignment operator called... " << std::endl;
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    std::cout << "assignment successful!" << std::endl;
    return (*this);
}
/*public methods*/

void    FragTrap::highFivesGuys(void)
{
    std::cout << "[FragTrap]\t" << this->_name << " gave a high five!\n" << std::endl;
    std::cout << "░░░░░░██░░░░░░░░█░░░░░░░░██░░░░░░░";
    std::cout << "\n" << "░░░░░░░█░░░░███░▒▒███░░░██░░░░░░░░";
    std::cout << "\n" << "░░░░░░░░░░░██░█▒▒▒█░██░██░░░░░░░░░";
    std::cout << "\n" << "░░██░░░░░░░█░░█▒▒▒█░░█░░░░░░░░░░░░";
    std::cout << "\n" << "░░░░██░░░░░█░░█▒▒▒█░░░█░░░░░░░░██░";
    std::cout << "\n" << "░░░░░██░░░██░░█▒▒▒█░░░█░░░░░████░░";
    std::cout << "\n" << "░░░░░░░░░░█░░░█▒▒▒█░░░█░░░░██░░░░░";
    std::cout << "\n" << "░░░░░░░░░░█░░░█▒▒▒█░░░██░░░░░░░░░░";
    std::cout << "\n" << "░░░███░░░░█░░███▒███░░░█░░░░░░░░░░";
    std::cout << "\n" << "░░░░░░░░░██░░░░█▒█░░░░░█░░░████░░░";
    std::cout << "\n" << "░░░░░░░░░█░░░░░█▒█░░░░░█░░░░░░░░░░";
    std::cout << "\n" << "░░░░░░░░██░░░░██▒██░░░░█░░░░░░░░░░";
    std::cout << "\n" << "░░░░░░░██░░░░░█▒▒▒█░░░░██░░░░░░░░░";
    std::cout << "\n" << "░░░░░░██░░░░░░█▒▒▒█░░░░░██░░░░░░░░";
    std::cout << "\n" << "░░░░░░█░░░░░░░█▒▒▒██░░░░░█░░░░░░░░";
    std::cout << "\n" << "░░░░░██░░░████░░░░░███░░░██░░░░░░░";
    std::cout << "\n" << "░░░░██░░░░█░░░░░░░░░░█░░░░███░░░░░";
    std::cout << "\n" << "░░░██░░░███░░░░░░░░░░███░░░░███░░░";
    std::cout << "\n" << "░░░█░░░░█░░░░░░░░░░░░░░█░░░░░░█░░░\n";
}