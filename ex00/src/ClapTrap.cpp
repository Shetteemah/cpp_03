#include "../include/ClapTrap.hpp"

/*constructors*/
/*default constructor*/
ClapTrap::ClapTrap(): _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "[ClapTrap]\t" << "defualt constructor has been called." << std::endl;
}
/*copy constructor*/
ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "[ClapTrap]\t" << "the copy constructor has been called." << std::endl;
    *this = copy;
}
/*constructor that takes a string parameter*/
ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "[ClapTrap]\t" << "constructor for " << _name << " has been called!" << std::endl;
}

/*destructors*/
ClapTrap::~ClapTrap()
{
    std::cout << "[ClapTrap]\t" << "destructor for " << _name << " has been called." << std::endl;
}

/*overload operators*/
ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "[ClapTrap]\t" << "assignment operator called... " << std::endl;
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    std::cout << "assignment successful!" << std::endl;
    return (*this);
}
/*public methods*/
void    ClapTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_energyPoints -= 1;
        std::cout << "[ClapTrap]\t" << this->_name << " attacked " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
        std::cout << "\t\t" << this->_name << " lost 1 energy point and now has " << this->_energyPoints << " energy points." << std::endl; 
    }
    else if (this->_energyPoints == 0)
        std::cout << "[ClapTrap]\t" << this->_name << " doesn't have enough energy to attack " << target << std::endl;
    else
        std::cout << "[ClapTrap]\t" << this->_name << " doesn't have enough hit points to attack " << target << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "[ClapTrap]\t" << this->_name << " has been attacked." << std::endl;
    if (this->_hitPoints > amount)
    {
        this->_hitPoints -= amount;
        std::cout << "\t\t" << this->_name << " lost " << amount << " hit points" << std::endl;
    }
    else if (this->_hitPoints > 0)
    {
        this->_hitPoints = 0;
        std::cout << "\t\t" << this->_name << "'s hit point is now empty and has died!" << std::endl;
    }
    else
    {
        std::cout << "\t\t" << this->_name << " is already dead." << std::endl;
        return ;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
        std::cout << "[ClapTrap]\trepair " << this->_name << "'s hit point by additional " << amount << " points" << std::endl;
    if (this->_energyPoints > 0 && this->_hitPoints > 0 && (this->_hitPoints + amount <= 10))
    {
        this->_hitPoints += amount;
        this->_energyPoints -= 1;
        std::cout << "[ClapTrap]\t" << this->_name << " has spent 1 energy point to repair their hit point by " << amount << " and now has: " << this->_hitPoints << " hit points; " << this->_energyPoints << " energy points left." << std::endl;
    }
    else if (this->_energyPoints == 0)
        std::cout << "[ClapTrap]\t" << this->_name << " doesn't have enough energy to be repaired. " << "current energy point: " << this->_energyPoints << std::endl;
    else if (this->_hitPoints == 0)
        std::cout << "[ClapTrap]\t" << this->_name << " doesn't have enough hit points to be repaired. " << "current hit point: " << this->_hitPoints << std::endl;
    else
        std::cout << "[ClapTrap]\t" << this->_name << "'s hit point is already full. " << "current hit point: " << this->_hitPoints << std::endl;
}
