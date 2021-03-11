#pragma once

#include "Display.h"

class Game {
	private:
		Display canvas;

	public:
		bool Init(Display Disp);
		void Draw();
		bool Tick();
		bool Input();
};