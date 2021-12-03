#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( void )
{
    _name = ("");
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
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
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    std::cout << "ScavTrap constructor called" << std::endl;
}

const ScavTrap & ScavTrap::operator=( ScavTrap const &rhs)
{
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    return rhs;
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
    _hitPoints -= amount;
    std::cout << "ScavTrap " << _name << " has now " << _hitPoints << " hitpoints!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    _hitPoints += amount;
    std::cout << "ScavTrap " << _name << " gets " << amount << " energy points " << "so it has now " << _hitPoints << " hitpoints!" << std::endl;
}