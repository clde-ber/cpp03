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
        ClapTrap & operator=( ClapTrap const & rhs);
        ~ClapTrap( void );
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string const & getName( void ) const;
        int const & getAttackDamage( void ) const;
        int const & getEnergyPoints( void ) const;

};

#endif