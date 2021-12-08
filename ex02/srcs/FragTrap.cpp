#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
    _name = ("");
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
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
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = rhs;
}

FragTrap & FragTrap::operator=( FragTrap const &rhs)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    return *this;
}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints - amount < 0)
        amount = _hitPoints;
    _hitPoints -= amount;
    std::cout << "FragTrap " << _name << " takes " << amount << " damage and now has now " << _hitPoints << " hitpoints!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints - amount < 0)
        amount = _energyPoints;
    else
        _energyPoints -= amount;
    _hitPoints += amount;
    std::cout << "FragTrap " << _name << " uses " << amount << " energy points to repair and now has " << _hitPoints << " hitpoints!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " sends a positive high fives request! " << std::endl;
}