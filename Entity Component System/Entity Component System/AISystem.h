#pragma once
#include <iostream>
#include <vector>
#include "Entity.h"
using namespace std;

class AISystem
{
	vector<Entity> entities;

public:
	void addEntity(Entity e) { /* TBI */ }
	void update() {
		cout << "AISystem Update" << endl;
		/* Loop through Entities with */
		/* HealthComponents and PositionComponents and Update */
		/* TBI */
	}
};
