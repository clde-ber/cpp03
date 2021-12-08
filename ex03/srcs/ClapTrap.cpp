#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & rhs) : _name(rhs._name), _hitPoints(rhs._hitPoints), _energyPoints(rhs._energyPoints), _attackDamage(rhs._attackDamage)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = rhs;
}

ClapTrap & ClapTrap::operator=( ClapTrap const &rhs)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    return *this;
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
    if (_hitPoints - amount < 0)
        amount = _hitPoints;
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage and now has now " << _hitPoints << " hitpoints!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints - amount < 0)
        amount = _energyPoints;
    else
        _energyPoints -= amount;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " uses " << amount << " energy points to repair and now has " << _hitPoints << " hitpoints!" << std::endl;
}

std::string const & ClapTrap::getName( void ) const
{
    return _name;
}

int const & ClapTrap::getAttackDamage( void ) const
{
    return _attackDamage;
}

int const & ClapTrap::getEnergyPoints( void ) const
{
    return _energyPoints;
}

int const & ClapTrap::getHitPoints( void ) const
{
    return _hitPoints;
}