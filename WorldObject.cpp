#include "WorldObject.h"

namespace GameEngine.h{

		WorldObject::WorldObject():TYPE(EMPTY), visible(true){

		}
		~WorldObject::WorldObject(){}
		int WorldObject::render(){
			return 0;
		}
		void WorldObject::move(DIMENSION *pos){}
		int WorldObject::TransformData(void f(DATA_TYPE &Data, short &type)){
			return 0;
		}
		int WorldObject::editMaterial(void f(Material &m)){
			return 0;
		}
		int WorldObject::loadDataFromFile(char const *url){
			return 0;
		}
		int WorldObject::_remove_child(WorldObject *ch){
			return 0;
		}

}