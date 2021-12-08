#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap dOne("diamond_one");
    DiamondTrap dTwo("diamond_two");
    DiamondTrap dThree(dOne);

    std::cout << std::endl;
    dOne.attack(dTwo.getName());
    dTwo.takeDamage(dOne.getAttackDamage());
    dTwo.beRepaired(dTwo.getEnergyPoints());
    dThree.attack(dTwo.getName());
    dTwo.takeDamage(dThree.getAttackDamage());
    dTwo.beRepaired(dTwo.getEnergyPoints());
    dTwo.whoAmI();
    dTwo.highFivesGuys();
    dOne.guardGate();
    std::cout << std::endl;
    return 0;
}