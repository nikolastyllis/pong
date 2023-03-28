#pragma once
#include <vector>

class Manager {
	protected:
		std::vector<Object*> objects;
	public:
		void update() {
			for(int i=0;i<objects.size();i++) {
				objects[i]->update();
			}
		}
		
		void add_object(Object* object) {
			objects.push_back(object);
		}
		
};	
