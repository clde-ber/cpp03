#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
    this->_name = ("");
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name )
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const & rhs)
{
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    std::cout << "FragTrap constructor called" << std::endl;
}

const FragTrap & FragTrap::operator=( FragTrap const &rhs) const
{
    return rhs;
}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::guardGate()
{
    std::cout << "FragTrap " << this->_name << " has enterred in Gate keeper mode!" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
    std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    this->_hitPoints -= amount;
    std::cout << "FragTrap " << this->_name << " has now " << this->_hitPoints << " hitpoints!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    this->_hitPoints += amount;
    std::cout << "FragTrap " << this->_name << " gets " << amount << " energy points " << "so it has now " << this->_hitPoints << " hitpoints!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " sends a positive high fives request! " << std::endl;
}