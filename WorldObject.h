
#include <vector>
#include "Vector.h"
#include "Material.h"
//#include "Data.h"
//#include "NSGameEngine.h"
namespace GameEngine{
#ifndef __WORLDOBJECT__
#define __WORLDOBJECT__



#ifndef DIMENSION
#define DIMENSION Vector
#endif

#ifndef DATA_TYPE
#define DATA_TYPE std::vector<DIMENSION *> 
#endif

	enum WorldObjects_type {
		EMPTY,
		GEO,
		BONE,
		EMITION
	};

	class WorldObject{
	private:
		DIMENSION *position, *rotation, *scale;
		std::vector<WorldObject *> children;
		DATA_TYPE Data;
		WorldObjects_type TYPE;
		bool visible;
		Material material;
		
		WorldObject();

	public:
		~WorldObject();
		int getDataSize(){return Data.size();}
		int getChildrenCount(){return children.size();}
		int render();
		void move(DIMENSION *pos);
		int TransformData(void f(DATA_TYPE &Data, short &type));
		int editMaterial(void f(Material &m));
		void addChild(WorldObject *ch){children.push_back(ch);}
		int loadDataFromFile(char const *url);
		int _remove_child(WorldObject *ch);
		void hide(){visible = false;}
		void show(){visible = true;}
		void setVisibity(bool v){visible = v;}
		

		/*friend Create_World();
		friend Create_WEmpty();
		friend Create_WObject();
		friend Create_WLight();
		friend Create_WBone();
		friend Hide_WorldObject();*/
	};

#endif
}

