SRC=NSGameEngine.cpp WorldObject.cpp main.cpp
HEAD=NSGameEngine.h WorldObject.h
beta: ${HEAD} ${SRC}
	g++ -o beta ${SRC}
