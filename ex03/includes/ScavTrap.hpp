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
        const ScavTrap & operator=( ScavTrap const &rhs) const;
        ~ScavTrap( void );
        void attack(std::string const & target);
        virtual void takeDamage(unsigned int amount);
        virtual void beRepaired(unsigned int amount);
        void guardGate();
};

#endif