#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public :
        FragTrap( void );
        FragTrap( std::string name );
        FragTrap( FragTrap const & rhs);
        FragTrap & operator=( FragTrap const &rhs);
        virtual ~FragTrap( void );
        void highFivesGuys(void);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif