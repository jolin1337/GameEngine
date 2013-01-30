#include "NSGameEngine.h"

namespace GameEngine{

	WorldObject *Create_World(){
		return 0;
	}
	WorldObject *Create_WEmpty(DIMENSION pos){
		return 0;
	}
	WorldObject *Create_WObject(DIMENSION pos, DATA_TYPE data){
		return 0;
	}
	WorldObject *Create_WLight(DIMENSION pos, int strength){
		return 0;
	}
	WorldObject *Create_WBone(DIMENSION pos1, DIMENSION pos2){
		return 0;
	}
	void hide_world_object(WorldObject *wo){
		wo.hide();
	}

};