#include "raylib.h"
#include "object.h"

int main(void)
{
    InitWindow(800, 450, "Terrain");

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(BLACK);
            
            
            //DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
