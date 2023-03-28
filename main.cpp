#include "raylib.h"
#include <inttypes.h>
#include "object.h"
#include "player.h"
#include "manager.h"
#include <iostream>

int main(void)
{
	Manager manager = Manager();
	Vector2 pos1 = {50,225};
	Vector2 pos2 = {750,225};
	
	int keyset1[2] = {87, 83};
	int keyset2[2] = {KEY_UP, KEY_DOWN};

	Player player1 = Player(pos1, 1, keyset1);
	Player player2 = Player(pos2, 2, keyset2);
	
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
