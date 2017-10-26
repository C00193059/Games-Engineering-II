#pragma once
#include <iostream>
#include <vector>
#include "Entity.h"
using namespace std;

class RenderSystem
{
	vector<Entity> entities;
	SDL_Renderer *rend;
public:
	void addEntity(Entity e) { /* TBI */ }
	void update() {
		cout << "RenderSystem Update" << endl;
		SDL_Rect rect;
		for (std::vector<Entity>::iterator i = entities.begin(); i != entities.end(); i++)
		{
			for (std::vector<Component>::iterator ind = i->getComponents().begin(); ind != i->getComponents().end(); ind++)
			{
				if (ind->type == "Position")
				{
					//need to access position Component but cant as its stored as a base component
				}
			}
			SDL_RenderDrawRect(rend, &rect);
		}
	}
};
