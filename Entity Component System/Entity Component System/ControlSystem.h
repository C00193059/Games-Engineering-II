#pragma once
#include <iostream>
#include <vector>
#include "Entity.h"
using namespace std;

class ControlSystem
{
	vector<Entity> entities;

public:
	void addEntity(Entity e) { /* TBI */ }
	void update() {
		cout << "ControlSystem Update" << endl;
		/* Loop through Entities with */
		/* ControlComponents and Update */
		/* TBI */
		//for (int i = 0; i < entities.size(); i++)
		//{
		//	entities[i].
		//}
	}
};