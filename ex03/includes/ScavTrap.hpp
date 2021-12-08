#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
    public :
        ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap( ScavTrap const & rhs);
        ScavTrap & operator=( ScavTrap const &rhs);
        virtual ~ScavTrap( void );
        void attack(std::string const & target);
        void guardGate();
        virtual void takeDamage(unsigned int amount);
        virtual void beRepaired(unsigned int amount);
};

#endif