#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
    _name = ("");
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name )
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const & rhs)
{
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    std::cout << "FragTrap constructor called" << std::endl;
}

const FragTrap & FragTrap::operator=( FragTrap const &rhs)
{
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    return rhs;
}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " sends a positive high fives request! " << std::endl;
}