#ifndef FRAGTRAP_HPP
#define FRAGTAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& other);
	~FragTrap();

	void highFivesGuys(void);
};





#endif