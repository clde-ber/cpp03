#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap one("claptrap_one");
    ClapTrap two("claptrap_secd");
    ScavTrap three("scavtrap_one");
    ScavTrap four(three);

    one.attack(two.getName());
    two.takeDamage(one.getAttackDamage());
    two.beRepaired(two.getEnergyPoints());
    one.attack(three.getName());
    three.takeDamage(one.getAttackDamage());
    three.beRepaired(three.getEnergyPoints());
    one.attack(four.getName());
    four.takeDamage(one.getAttackDamage());
    four.beRepaired(four.getEnergyPoints());
    four.guardGate();
    return 0;
}