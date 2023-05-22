#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    private:

    public:
    /*default constructor*/
    FragTrap();
    /*copy constructor*/
    FragTrap(const FragTrap &copy);
    /*constructor that takes a string*/
    FragTrap(const std::string name);
    /*destructor*/
    virtual ~FragTrap();
    /*overload operator*/
    FragTrap &operator=(const FragTrap &src);
    /*public method*/
    void highFivesGuys(void);
};

#endif