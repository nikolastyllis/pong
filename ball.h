#pragma once

class Ball : public Object {
	private:
		Vector2 direction;	

	public:
		Ball(Vector2 a_position) {
			position = a_position;	
			collider.x = position.x;
			collider.y = position.y;
			collider.width = 20;
			collider.height = 20;
		}	

		void update() {
			collider.x = position.x;
			collider.y = position.y;
			DrawCircle(position.x, position.y, 10, WHITE);
		}
};
