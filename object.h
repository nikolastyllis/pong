#pragma once

class GameObject {
	protected:
		Vector2 position;
	public:
		Vector2 get_position() {
			return position;
		}

		void set_position(Vector2 pos) {
			position = pos;
		}

		virtual void draw() = 0;
};