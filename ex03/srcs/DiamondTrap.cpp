#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
    _name = "";
    ClapTrap::_name = _name + "__clap__name";
    _hitPoints = FragTrap::ClapTrap::_hitPoints;
    _energyPoints = ScavTrap::ClapTrap::_energyPoints;
    _attackDamage = FragTrap::ClapTrap::_attackDamage;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name )
{
    _name = name;
    ClapTrap::_name = name + "__clap__name";
    _hitPoints = FragTrap::ClapTrap::_hitPoints;
    _energyPoints = ScavTrap::ClapTrap::_energyPoints;
    _attackDamage = FragTrap::ClapTrap::_attackDamage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & rhs)
{
    _name = rhs._name;
    ClapTrap::_name = rhs._name + "__clap__name";
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

const DiamondTrap & DiamondTrap::operator=( DiamondTrap const &rhs)
{
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    new (this) DiamondTrap(rhs);
    return *this;
}

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    std::cout << "DiamondTrap " << _name << " has now " << _hitPoints << " hitpoints!" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
    _hitPoints += amount;
    std::cout << "DiamondTrap " << _name << " gets " << amount << " energy points " << "so it has now " << _hitPoints << " hitpoints!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << _name << " | claptrap name " << ClapTrap::_name << std::endl;
}