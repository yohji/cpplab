ADD_DEFINITIONS(-Wall -O2)

ADD_LIBRARY(cpplablib SHARED 
	Application.cpp
	Logger.cpp
	Monitor.cpp
	Number.cpp
	Point.cpp
	Vector.cpp)
