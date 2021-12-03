#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap one("claptrap_one");
    ClapTrap three(one);

    std::cout << std::endl;
    one.attack(three.getName());
    three.takeDamage(one.getAttackDamage());
    three.beRepaired(three.getEnergyPoints());
    std::cout << std::endl;
    return 0;
}