#pragma once
#include "Component.h"
class PositionComponent : public Component
{
public:
	PositionComponent() : xPos(100), yPos(400) { type = "Position"; }
	/* Data Only */
	float getXPos() { return xPos; }
	float getYPos() { return yPos; }

	void setXPos(float x) { this->xPos = x; }
	void setYPos(float y) { this->yPos = y; }

private:
	float xPos;
	float yPos;
};
