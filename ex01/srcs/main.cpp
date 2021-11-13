#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap one("first one");
    ClapTrap two("second one");
    ScavTrap three("third one");
    ScavTrap four(three);

    one.attack(two.getName());
    two.takeDamage(one.getAttackDamage());
    two.beRepaired(two.getEnergyPoints());
    one.attack(three.getName());
    three.takeDamage(three.getAttackDamage());
    three.beRepaired(three.getEnergyPoints());
    one.attack(four.getName());
    three.guardGate();
    four.takeDamage(four.getAttackDamage());
    four.beRepaired(four.getEnergyPoints());
    four.guardGate();
    return 0;
}