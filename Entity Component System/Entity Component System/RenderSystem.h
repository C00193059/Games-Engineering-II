#pragma once
#include <iostream>
#include <vector>
#include "Entity.h"
using namespace std;

class RenderSystem
{
	vector<Entity> entities;
	//SDL_Renderer *rend;
public:
	void addEntity(Entity e) { entities.push_back(e); }
	void update() {
		cout << "RenderSystem Update" << endl;
		//SDL_Rect rect;
		for (std::vector<Entity>::iterator i = entities.begin(); i != entities.end(); i++)
		{
			//for (std::vector<Component>::iterator ind = i->getComponents().begin(); ind != i->getComponents().end(); ind++)
			//{
			for (int ind = 0; ind < i->getComponents().size(); ind++)
			{
				Component *temp = &i->getComponents().at(ind);
				//if (temp->type == "Position")
				//{
					temp->update();
				//}
					//PositionComponent pc = i.;
				//rect.x = 
				//currently working here
			}
			//SDL_RenderDrawRect(rend, &rect);
		}
	}
};
