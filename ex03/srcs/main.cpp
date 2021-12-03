#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
/*
**  ClapTrap one("claptrap_one");
**  ClapTrap two("claptrap_secd");
*/  
    ScavTrap three("scavtrap_one");
    ScavTrap four(three);
    FragTrap five("fragtrap_one");
    FragTrap six(five);
    DiamondTrap dOne("diamond_one");
    DiamondTrap dTwo("diamond_two");
/*
**  one.attack(two.getName());
**  two.takeDamage(one.getAttackDamage());
**  two.beRepaired(two.getEnergyPoints());
**  one.attack(three.getName());
**  three.takeDamage(one.getAttackDamage());
**  three.beRepaired(three.getEnergyPoints());
**  one.attack(four.getName());
**  four.takeDamage(one.getAttackDamage());
**  four.beRepaired(four.getEnergyPoints());
**  four.guardGate();
*/
    three.attack(five.getName());
    five.takeDamage(three.getAttackDamage());
    five.beRepaired(five.getEnergyPoints());
    five.highFivesGuys();
    three.attack(six.getName());
    six.takeDamage(three.getAttackDamage());
    six.beRepaired(six.getEnergyPoints());
    six.highFivesGuys();
    five.attack(dOne.getName());
    dOne.takeDamage(five.getAttackDamage());
    dOne.beRepaired(five.getEnergyPoints());
    dOne.attack(dTwo.getName());
    dTwo.takeDamage(dOne.getAttackDamage());
    dTwo.beRepaired(dTwo.getEnergyPoints());
    dTwo.whoAmI();
    return 0;
}