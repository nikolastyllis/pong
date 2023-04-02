#pragma once

class Ball : public Object {
	private:
		Vector2 direction = {0.1, 0};	

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
			DrawRectangleLines(position.x, position.y, 20, 20, GREEN);

			if(isCollide) {
				direction = {-0.1, 0};
			}

			//position.x += direction.x;
			//position.y += direction.y;
		}
};
