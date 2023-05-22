#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <string>
#include <iostream>

/*my class*/

class ClapTrap
{
/*private variable members*/
    protected:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
/*public variable members*/
    public:
    /*constructors*/
        /*default constructor*/
        ClapTrap();
        /*copy constructor*/
        ClapTrap(const ClapTrap &copy);
        /*constructor that takes a string parameter*/
        ClapTrap(const std::string name);
    /*destructor*/
        virtual ~ClapTrap();
    /*overload operator*/
        ClapTrap &operator=(const ClapTrap &src);
    /*public methods/functions*/
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif
