#include "ControlComponent.h"
void ControlComponent::ProcessInput()
{
	SDL_Event e;
	while (SDL_PollEvent(&e) != 0)
	{
		//	Init(e);       
		switch (e.type) {

			/* Keyboard Down Event */
		case SDL_KEYDOWN:
			switch (e.key.keysym.sym) {
			case SDLK_a:
				left = true;
				break;
			case SDLK_s:
				down = true;
				break;
			case SDLK_d:
				right = true;
				break;
			case SDLK_w:
				up = true;
				break;
			}
			break;
			/* Keyboard Released Event */
		case SDL_KEYUP:

			switch (e.key.keysym.sym) {

				switch (e.key.keysym.sym) {
				case SDLK_a:
					left = false;
					break;
				case SDLK_s:
					down = false;
					break;
				case SDLK_d:
					right = false;
					break;
				case SDLK_w:
					up = false;
					break;
				}
				break;
			}
			//check for exit
		}
	}
}