#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & rhs) : _name(rhs._name), _hitPoints(rhs._hitPoints), _energyPoints(rhs._energyPoints), _attackDamage(rhs._attackDamage)
{
    std::cout << "Constructor called" << std::endl;
}

const ClapTrap & ClapTrap::operator=( ClapTrap const &rhs) const
{
    return rhs;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " has now " << this->_hitPoints << " hitpoints!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_hitPoints += amount;
    std::cout << "ClapTrap " << this->_name << " gets " << amount << " energy points " << "so it has now " << this->_hitPoints << " hitpoints!" << std::endl;
}

std::string ClapTrap::getName( void )
{
    return this->_name;
}

int ClapTrap::getAttackDamage( void )
{
    return this->_attackDamage;
}

int ClapTrap::getEnergyPoints( void )
{
    return this->_energyPoints;
}