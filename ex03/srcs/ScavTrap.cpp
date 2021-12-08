#include "ScavTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
    _name = ("");
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name )
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & rhs)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = rhs;
}

ScavTrap & ScavTrap::operator=( ScavTrap const &rhs)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    return *this;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " has enterred in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints - amount < 0)
        amount = _hitPoints;
    _hitPoints -= amount;
    std::cout << "ScavTrap " << _name << " takes " << amount << " damage and now has now " << _hitPoints << " hitpoints!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints - amount < 0)
        amount = _energyPoints;
    else
        _energyPoints -= amount;
    _hitPoints += amount;
    std::cout << "ScavTrap " << _name << " uses " << amount << " energy points to repair and now has " << _hitPoints << " hitpoints!" << std::endl;
}
