#pragma once
#include "Component.h"
#include <vector>
using namespace std;
class Entity
{
public:
	string type;
	Entity() {};
	void addComponent(Component c) { components.push_back(c); }
	void removeComponent(Component c) { /* TBI */ }
	vector<Component> getComponents() { return components; }
private:
	vector<Component> components;
};
