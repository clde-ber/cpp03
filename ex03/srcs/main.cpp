#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    ScavTrap three("scavtrap_one");
    FragTrap five("fragtrap_one");
    DiamondTrap dOne("diamond_one");
    DiamondTrap dTwo(dOne);

    std::cout << std::endl;
    five.attack(dOne.getName());
    dOne.attack(dTwo.getName());
    dTwo.whoAmI();
    std::cout << std::endl;
    return 0;
}