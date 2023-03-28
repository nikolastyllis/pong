#include "raylib.h"
#include <inttypes.h>
#include "object.h"
#include "player.h"
#include "manager.h"
#include <iostream>

int main(void)
{
	Manager manager = Manager();
	Vector2 pos1 = {10,225};
	Vector2 pos2 = {790,225};

	Player player1 = Player(pos1, 1);
	Player player2 = Player(pos2, 2);
	
	manager.add_object(&player1);
	manager.add_object(&player2);

    	InitWindow(800, 450, "Terrain");

    	while (!WindowShouldClose())
    	{
        	BeginDrawing();
       		ClearBackground(BLACK);
			            
            	manager.update();
        
        	EndDrawing();
    	}

    	CloseWindow();

    	return 0;
}
