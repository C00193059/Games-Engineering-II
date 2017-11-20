#pragma once
#include <iostream>
#include <vector>
#include "Entity.h"
using namespace std;

class ControlSystem
{
	vector<Entity> entities;

public:
	void addEntity(Entity e) { entities.push_back(e); }
	void update() {
		cout << "ControlSystem Update" << endl;
		for (std::vector<Entity>::iterator i = entities.begin(); i != entities.end(); i++)
		{
			for (int ind = 0; ind < i->getComponents().size(); ind++)
			{
				Component *temp = &i->getComponents().at(ind);
				//if (temp->type == "Control" || temp->type == "Position")
				//{
					temp->update();
				//}
			}
		}
		/* Loop through Entities with */
		/* ControlComponents and Update */
		/* TBI */
		//for (int i = 0; i < entities.size(); i++)
		//{
		//	entities[i].
		//}
	}
};