#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name(""), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
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

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap( ScavTrap const & rhs);
        const ScavTrap & operator=( ScavTrap const &rhs) const;
        ~ScavTrap( void );
}