#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "./ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    private:
        int _guardingGate;
    public:
    /*constructors*/
        /*default constructor*/
        ScavTrap();
        /*constructor copy*/
        ScavTrap(const ScavTrap &copy);
        /*constructor that takes a string*/
        ScavTrap(const std::string name);
    /*destructor*/
        virtual ~ScavTrap();
    /*overload operators*/
        ScavTrap &operator=(const ScavTrap &src);
    /*public methods*/
        void attack(const std::string &target);
        void guardGate();
};

#endif
