#pragma once
#include <vector>

class Manager {
	protected:
		std::vector<Object*> objects;
	public:
		void update() {
			for(int i=0;i<objects.size();i++) {
				for(int j=0;j<objects.size();j++) {
					if(i==j) continue;
					if(CheckCollisionRecs(objects[i]->get_collider(), objects[j]->get_collider())) {
						objects[i]->colliding();
						objects[j]->colliding();
					}
					else {
						objects[i]->notColliding();
						objects[j]->notColliding();
					}
				}
			}

			for(int i=0;i<objects.size();i++) {
				objects[i]->update();
			}	
	
		}
		
		void add_object(Object* object) {
			objects.push_back(object);
		}
		
};	
