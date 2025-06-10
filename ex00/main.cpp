#include "ClapTrap.hpp"

int main ()
{
	ClapTrap clap("CL4P-TP");
	clap.attack("target dummy");
	clap.takeDamage(3);
	clap.beRepaired(5);
	clap.takeDamage(15);
	clap.beRepaired(5);

	return 0;
}