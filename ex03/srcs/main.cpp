#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap one("first one");
    ClapTrap two("second one");
    ScavTrap three("third one");
    ScavTrap four(three);
    FragTrap five("fifth one");
    FragTrap six(five);
    DiamondTrap dOne("diamond one");
    DiamondTrap dTwo("diamond two");

    one.attack(two.getName());
    two.takeDamage(one.getAttackDamage());
    two.beRepaired(two.getEnergyPoints());
    one.attack(three.getName());
    three.takeDamage(one.getAttackDamage());
    three.beRepaired(three.getEnergyPoints());
    one.attack(four.getName());
    four.takeDamage(one.getAttackDamage());
    four.beRepaired(four.getEnergyPoints());
    four.guardGate();
    three.attack(five.getName());
    five.takeDamage(three.getAttackDamage());
    five.beRepaired(five.getEnergyPoints());
    five.highFivesGuys();
    three.attack(six.getName());
    six.takeDamage(three.getAttackDamage());
    six.beRepaired(six.getEnergyPoints());
    six.highFivesGuys();
    dOne.attack(dTwo.getName());
    dTwo.takeDamage(dOne.getAttackDamage());
    dTwo.beRepaired(dTwo.getEnergyPoints());
    dTwo.whoAmI();
    return 0;
}