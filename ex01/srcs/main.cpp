#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap one("claptrap_one");
    ScavTrap three("scavtrap_one");
    ScavTrap four(three);

    std::cout << std::endl;
    one.attack(three.getName());
    three.takeDamage(one.getAttackDamage());
    three.beRepaired(three.getEnergyPoints());
    one.attack(four.getName());
    four.takeDamage(one.getAttackDamage());
    four.beRepaired(four.getEnergyPoints());
    four.guardGate();
    std::cout << std::endl;
    return 0;
}