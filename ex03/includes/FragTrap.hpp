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
        const FragTrap & operator=( FragTrap const &rhs);
        ~FragTrap( void );
        void highFivesGuys(void);
};

#endif