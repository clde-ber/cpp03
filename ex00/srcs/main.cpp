#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap one("first one");
    ClapTrap two("second one");
    ClapTrap three(two);

    one.attack(two.getName());
    two.takeDamage(one.getAttackDamage());
    two.beRepaired(two.getEnergyPoints());
    one.attack(three.getName());
    three.takeDamage(one.getAttackDamage());
    three.beRepaired(three.getEnergyPoints());
    return 0;
}