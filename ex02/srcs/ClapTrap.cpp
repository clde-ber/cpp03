#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & rhs) : _name(rhs._name), _hitPoints(rhs._hitPoints), _energyPoints(rhs._energyPoints), _attackDamage(rhs._attackDamage)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

const ClapTrap & ClapTrap::operator=( ClapTrap const &rhs)
{
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    return rhs;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " has now " << _hitPoints << " hitpoints!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " gets " << amount << " energy points " << "so it has now " << _hitPoints << " hitpoints!" << std::endl;
}

std::string & ClapTrap::getName( void )
{
    return _name;
}

int ClapTrap::getAttackDamage( void )
{
    return _attackDamage;
}

int ClapTrap::getEnergyPoints( void )
{
    return _energyPoints;
}