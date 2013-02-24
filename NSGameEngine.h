#include "Camera.h"
#include "Vector.h"
#include "WorldObject.h"

namespace GameEngine{

#ifndef _NSGE__
#define _NSGE__

#ifndef DIMENSION
#define DIMENSION Vector
#endif

#ifndef DATA_TYPE
#define DATA_TYPE std::vector<DIMENSION *>
#endif
	
	extern Camera camera;
	WorldObject *Create_World();
	WorldObject *Create_WEmpty(DIMENSION pos);
	WorldObject *Create_WObject(DIMENSION pos, DATA_TYPE data);
	WorldObject *Create_WLight(DIMENSION pos, int strength);
	WorldObject *Create_WBone(DIMENSION pos1, DIMENSION pos2);
	void hide_world_object(WorldObject *wo);


#endif

}

