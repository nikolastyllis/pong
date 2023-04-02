#pragma once

class Ball : public Object {
	private:
		Vector2 direction = {0.9284766908852594, 0.3713906763541037};
		uint64_t lastCollision = 0;
	public:
		Ball(Vector2 a_position) {
			position = a_position;	
			collider.x = position.x;
			collider.y = position.y;
			collider.width = 20;
			collider.height = 20;
		}	

		void update() {
			collider.x = position.x - 10;
			collider.y = position.y - 10;
			DrawCircle(position.x, position.y, 10, WHITE);
			DrawRectangleLines(collider.x, collider.y, 20, 20, GREEN);

			handleCollision();

			position.x += direction.x/10;
			position.y += direction.y/10;
		}

		void handleCollision() {
			if(isCollide || position.y < 20 || position.y > 430) {
				Reflection();
				notColliding();
			}
		}

		void Reflection() {
			if(timeSinceEpochMillisec() - lastCollision < 500) return;
			
			Vector2 normal;
			if(position.x < 400) {
				normal = {1, 0};
			}
			else if(position.x > 400) {
				normal = {-1, 0};
			}
			if(position.y < 20) {
				normal = {0, 1};
			}
			else if(position.y > 430) {
				normal = {0, -1};
			}

			float dot = 2*(direction.x*normal.x + direction.y*normal.y);
			direction.x = direction.x - (dot * normal.x);
			direction.y = direction.y - (dot * normal.y);

			lastCollision = timeSinceEpochMillisec();
		}

		uint64_t timeSinceEpochMillisec() {
		  	using namespace std::chrono;
		  	return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
		}
};
