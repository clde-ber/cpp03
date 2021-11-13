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
        const FragTrap & operator=( FragTrap const &rhs) const;
        ~FragTrap( void );
        void attack(std::string const & target);
        virtual void takeDamage(unsigned int amount);
        virtual void beRepaired(unsigned int amount);
        void highFivesGuys(void);
};

#endif