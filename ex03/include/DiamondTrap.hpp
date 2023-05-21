#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    public:
        /*default constructor*/
        DiamondTrap();
        /*copy constructor*/
        DiamondTrap(const DiamondTrap &copy);
        /*constructor that takes a string*/
        DiamondTrap(const std::string name);
        /*destructor*/
        virtual ~DiamondTrap();
        /*overload operator*/
        DiamondTrap &operator=(const DiamondTrap &src);
        /*public method*/
        void attack(const DiamondTrap &target);
        void whoAmI(void);
}
#endif