#ifndef __SCAV_TRAP_HPP__
#define __SCAV_TRAP_HPP__

#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
/*constructors*/
    /*default constructor*/
    ScavTrap();
    /*constructor copy*/
    ScavTrap(const ScavTrap &name);
    /*constructor that takes a string*/
    ScavTrap(const std::string name);
/*destructor*/
    ~ScavTrap();
/*overload operators*/
    ScavTrap &operator=(const ScavTrap &src);
/*public methods*/
    void attack(const std::string &target);
    void guardGate();
};

#endif