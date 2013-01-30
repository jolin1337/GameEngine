#include "Camera.h"
#include "Vector.h"
#include "Data.h"

namespace GameEngine{

#ifndef _NSGE__
#define _NSGE__

#ifndef DIMENSION
#define DIMENSION Vector
#endif

#ifndef DATA_TYPE
#define DATA_TYPE std::vector<DIMENSION *>
#endif
	
	Camera camera;
	int Create_World();
	int Create_WEmpty(DIMENSION pos);
	int Create_WObject(DIMENSION pos, DATA_TYPE data);
	int Create_WLight(DIMENSION pos, int strength);
	int Create_WBone(DIMENSION pos1, DIMENSION pos2);
	void hide_world_object(WorldObject *wo){
		wo.hide();
	}


#endif

}

