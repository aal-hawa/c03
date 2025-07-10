#include "FragTrap.hpp"

int main()
{
    FragTrap frag("user");

    frag.attack("an enemy");
    frag.takeDamage(30);
    frag.beRepaired(20);
    frag.highFivesGuys();
    
    return 0;
}