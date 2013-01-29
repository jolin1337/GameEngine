namespace GameEngine{
#ifndef DIMENSION
#define DIMENSION Vector
#endif
#ifndef DATA_TYPE
#include <vector>
#define DATA_TYPE std::vector<DIMENSION *>
#endif

#define EMPTY    1
#define GEO      2
#define BONE     3
#define EMITION  4
	class WorldObject{
		DIMENSION *position, *rotation, *scale;
		DATA_TYPE Data;
		short TYPE;
		WorldObject():TYPE(EMPTY){

		}

		friend Create_World();
		friend Create_WEmpty();
		friend Create_WObject();
		friend Create_WLight();
		friend Create_WBone();
		friend Hide_WorldObject();
	};
}