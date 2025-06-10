#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Serena");

    scav.attack("an enemy");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    return 0;
}