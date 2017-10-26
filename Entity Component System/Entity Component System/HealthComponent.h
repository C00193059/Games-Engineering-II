#pragma once
#include "Component.h"
class HealthComponent : public Component
{
public:
	string type;
	HealthComponent() : health(100) { type = "Health"; }
	/* Data Only */
	int getHealth() { return health; }
	void setHealth(int health) { this->health = health; }
private:
	int health;
};
