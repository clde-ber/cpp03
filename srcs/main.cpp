#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap one("first one");
    ClapTrap two("second one");
    ClapTrap three("third one");

    one.attack(two.getName());
    two.takeDamage(one.getAttackDamage());
    two.beRepaired(two.getEnergyPoints());
    return 0;
}