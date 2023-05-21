#ifndef __FRAG_TRAP__
#define __FRAG_TRAP__

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