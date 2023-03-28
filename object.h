#pragma once

class Object {
	protected:
		Vector2 position;
		uint8_t id;	
	public:
		Vector2 get_position() {
			return position;
		}

		void set_position(Vector2 pos) {
			position = pos;
		}

		virtual void update() = 0;
};
