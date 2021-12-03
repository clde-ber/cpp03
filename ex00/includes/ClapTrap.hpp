#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class   ClapTrap
{
    private :
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
    public :
        ClapTrap( void );
        ClapTrap( std::string name );
        ClapTrap( ClapTrap const & rhs);
        const ClapTrap & operator=( ClapTrap const &rhs);
        ~ClapTrap( void );
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string & getName( void );
        int getAttackDamage( void );
        int getEnergyPoints( void );

};

#endif

//this operator= get