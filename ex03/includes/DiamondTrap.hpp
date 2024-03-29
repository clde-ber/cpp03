#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private :
        std::string _name;
    public :
        DiamondTrap( void );
        DiamondTrap( std::string name );
        DiamondTrap( DiamondTrap const & rhs);
        DiamondTrap & operator=( DiamondTrap const &rhs);
        virtual ~DiamondTrap( void );
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void whoAmI();
};

#endif