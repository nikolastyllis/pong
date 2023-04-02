#pragma once

class Player : public Object {
	private:
		int* keyset;
	public:
		Player(Vector2 a_position, uint8_t a_id, int* a_keyset) {
			position = a_position;
			id = a_id;
			keyset = a_keyset;

			collider.x = position.x;
			collider.y = position.y;
			collider.width = 15;
			collider.height = 30;
		}

		void update() {
			DrawRectangle(position.x, position.y, 15, 30, WHITE);
			DrawRectangleLines(collider.x, collider.y, 15, 30, GREEN);

			collider.x = position.x;
			collider.y = position.y;
			
			if(IsKeyDown(keyset[0])) {
				position.y -= 0.1;
			}
			
			if(IsKeyDown(keyset[1])) {
				position.y += 0.1;
			}

			if(position.y < 0) position.y = 0;
			if(position.y > GetScreenHeight()-30) position.y = GetScreenHeight()-30;
		}
};
