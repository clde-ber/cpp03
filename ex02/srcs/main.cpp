#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap three("scavtrap_one");
    FragTrap five("fragtrap_one");
    FragTrap six(five);

    std::cout << std::endl;
    three.attack(five.getName());
    five.takeDamage(three.getAttackDamage());
    five.beRepaired(five.getEnergyPoints());
    five.highFivesGuys();
    three.attack(six.getName());
    six.takeDamage(three.getAttackDamage());
    six.beRepaired(six.getEnergyPoints());
    six.highFivesGuys();
    std::cout << std::endl;
    return 0;
}