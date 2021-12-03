#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap( ScavTrap const & rhs);
        const ScavTrap & operator=( ScavTrap const &rhs);
        ~ScavTrap( void );
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void guardGate();
};

#endif