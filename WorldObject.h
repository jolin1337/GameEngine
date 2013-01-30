
namespace GameEngine{
#ifndef __WORLDOBJECT__
#define __WORLDOBJECT__

#include <vector>
#include "Vector.h"
#include "Material"
#include "Data.h"
#include "NSGameEngine.h"

#ifndef DIMENSION
#define DIMENSION Vector
#endif

#ifndef DATA_TYPE
#define DATA_TYPE std::vector<DIMENSION *> 
#endif

#define EMPTY    1
#define GEO      2
#define BONE     3
#define EMITION  4

	class WorldObject{
	private:
		DIMENSION *position, *rotation, *scale;
		std::vector<WorldObject *> children;
		DATA_TYPE Data;
		short TYPE;
		bool visible;
		Marterial material;
		

		WorldObject():TYPE(EMPTY), visible(true){

		}
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
		

		friend Create_World();
		friend Create_WEmpty();
		friend Create_WObject();
		friend Create_WLight();
		friend Create_WBone();
		friend Hide_WorldObject();
	};

#endif
}

