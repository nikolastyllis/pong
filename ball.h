#pragma once

class Ball : public Object {
	public:
		Ball(Vector2 a_position) {
			position = a_position;
		}		

		void update() {
			DrawCircle(position.x, position.y, 10, WHITE);
		}
};
