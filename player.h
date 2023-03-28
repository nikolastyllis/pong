#pragma once

class Player : public Object {
	public:
		Player(Vector2 a_position, uint8_t a_id) {
			position = a_position;
			id = a_id;
			
		}

		void update() {
			DrawCircle(position.x, position.y, 10, WHITE);
		}
};
