#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d("Alpha");

    d.attack("Enemy");
    d.takeDamage(30);
    d.beRepaired(20);
    d.whoAmI();
    
    return 0;
}