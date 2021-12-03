#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap one("claptrap_one");
    ClapTrap two("claptrap_secd");
    ClapTrap three(two);

    one.attack(two.getName());
    two.takeDamage(one.getAttackDamage());
    two.beRepaired(two.getEnergyPoints());
    one.attack(three.getName());
    three.takeDamage(one.getAttackDamage());
    three.beRepaired(three.getEnergyPoints());
    return 0;
}