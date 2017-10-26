#include "AISystem.h"
#include "HealthComponent.h"
#include "PositionComponent.h"
#include "RenderSystem.h"
#include "ControlSystem.h"
#include "ControlComponent.h"
int main(void*)
{
	Entity player; Entity dog; Entity cat; Entity alien;
	player.type = "Player";
	dog.type = "Dog";
	cat.type = "Cat";
	alien.type = "Alien";
	HealthComponent hc; PositionComponent pc; ControlComponent cc;
	pc.setXPos(250);
	pc.setYPos(250);
	player.addComponent(hc); player.addComponent(pc); player.addComponent(cc);
	pc.setXPos(100);
	pc.setYPos(100);
	dog.addComponent(hc);  dog.addComponent(pc);
	pc.setXPos(400);
	pc.setYPos(200); 
	cat.addComponent(hc); cat.addComponent(pc);
	pc.setXPos(300);
	pc.setYPos(50); 
	alien.addComponent(hc); alien.addComponent(pc);

	AISystem hs; RenderSystem ps; ControlSystem cs;
	hs.addEntity(player); ps.addEntity(player); cs.addEntity(player);
	hs.addEntity(dog); ps.addEntity(dog);
	hs.addEntity(cat); ps.addEntity(cat);
	hs.addEntity(alien); ps.addEntity(alien);

	while (true) {
		hs.update(); ps.update(); cs.update();
	}
	return 0;
}
