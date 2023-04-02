#pragma once

class Object {
	protected:
		Vector2 position;
		uint8_t id;	
		Rectangle collider;
		bool isCollide = false;
	public:
		Vector2 get_position() {
			return position;
		}

		Rectangle get_collider() {
			return collider;
		}

		void colliding() {
			std::cout<<"Collided\n";
			isCollide = true;
		}	

		void notColliding() {
			isCollide = false;
		}		

		void set_position(Vector2 pos) {
			position = pos;
		}

		virtual void update() = 0;
};
