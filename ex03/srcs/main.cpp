#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap dOne("diamond_one");
    DiamondTrap dTwo(dOne);

    std::cout << std::endl;
    dTwo.attack(dOne.getName());
    dOne.attack(dTwo.getName());
    dTwo.whoAmI();
    dTwo.highFivesGuys();
    dOne.guardGate();
    std::cout << std::endl;
    return 0;
}