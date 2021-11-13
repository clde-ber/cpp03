#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( void )
{
    this->_name = ("");
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name )
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & rhs)
{
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    std::cout << "ScavTrap constructor called" << std::endl;
}

const ScavTrap & ScavTrap::operator=( ScavTrap const &rhs) const
{
    return rhs;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " has enterred in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    this->_hitPoints -= amount;
    std::cout << "ScavTrap " << this->_name << " has now " << this->_hitPoints << " hitpoints!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    this->_hitPoints += amount;
    std::cout << "ScavTrap " << this->_name << " gets " << amount << " energy points " << "so it has now " << this->_hitPoints << " hitpoints!" << std::endl;
}