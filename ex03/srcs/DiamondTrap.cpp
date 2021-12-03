#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
    this->_name = "";
    ClapTrap::_name = this->_name + "__clap__name";
    this->_hitPoints = FragTrap::ClapTrap::_hitPoints;
    this->_energyPoints = ScavTrap::ClapTrap::_energyPoints;
    this->_attackDamage = FragTrap::ClapTrap::_attackDamage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name )
{
    this->_name = name;
    ClapTrap::_name = name + "__clap__name";
    this->_hitPoints = FragTrap::ClapTrap::_hitPoints;
    this->_energyPoints = ScavTrap::ClapTrap::_energyPoints;
    this->_attackDamage = FragTrap::ClapTrap::_attackDamage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & rhs)
{
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

const DiamondTrap & DiamondTrap::operator=( DiamondTrap const &rhs) const
{
    return rhs;
}

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
    this->_hitPoints -= amount;
    std::cout << "DiamondTrap " << this->_name << " has now " << this->_hitPoints << " hitpoints!" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
    this->_hitPoints += amount;
    std::cout << "DiamondTrap " << this->_name << " gets " << amount << " energy points " << "so it has now " << this->_hitPoints << " hitpoints!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << _name << std::endl;
}