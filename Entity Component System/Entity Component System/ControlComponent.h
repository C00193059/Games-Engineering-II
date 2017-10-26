#pragma once

#define SDL_MAIN_HANDLED
#ifdef __APPLE__
#elif defined(_WIN64) || defined(_WIN32)
#include "SDL.h"
#endif
#include<map>
#include<vector>
#include "Component.h"
class ControlComponent : public Component
{
public:
	ControlComponent() { left = false; right = false; up = false; down = false; type = "Control"; }
	/* Data Only */
	void ProcessInput();
	float getLeft() { return left; }
	float getRight() { return right; }
	float getUp() { return up; }
	float getRDown() { return down; }


	void setLeft(float l) { this->left = l; }
	void setRight(float r) { this->right = r; }
	void setUp(float u) { this->up = u; }
	void setDown(float d) { this->down = d; }
private:
	bool left;
	bool right;
	bool up;
	bool down;
};