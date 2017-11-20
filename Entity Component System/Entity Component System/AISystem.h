#pragma once
#include <iostream>
#include <vector>
#include "Entity.h"
using namespace std;

class AISystem
{
	vector<Entity> entities;

public:
	void addEntity(Entity e) { entities.push_back(e); }
	void update() {
		cout << "AISystem Update" << endl;
		for (std::vector<Entity>::iterator i = entities.begin(); i != entities.end(); i++)
		{
			for (int ind = 0; ind < i->getComponents().size(); ind++)
			{
				Component *temp = &i->getComponents().at(ind);
				//if (temp->type == "Health" || temp->type == "Position")
				//{
					temp->update();
				//}
			}
		}
		/* Loop through Entities with */
		/* HealthComponents and PositionComponents and Update */
		/* TBI */
	}
};
