#pragma once
#include <iostream>
class Component
{
public:
	std::string type;
	void update() { if (type == "Health")
		std::cout << "Health Component Called" << std::endl;
	if (type == "Control")
		std::cout << "Control Component Called" << std::endl;
	if (type == "Position")
		std::cout << "Position Component Called" << std::endl;

	std::cout << "Component Called" << std::endl;
	};
};