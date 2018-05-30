/******************************************************************************
*	Description:	Polygon Declaration File
*			Represents any polygon (regular o irregular)
*	Author:		Carlos R. Arias
*	Date:		2018 - 05 - 30
******************************************************************************/
#pragma once
#include "point.h"
#include <string>
using std::string;

class Polygon{
	Point* _points;
	size_t _sides;
	size_t _addedPoints;
public:
	Polygon(size_t);
	Polygon(const Polygon&);
	~Polygon();
	bool AddCorner(const Point&);
	Polygon& operator=(const Polygon&);
	string ToString()const;
	double Area()const;
	double Perimeter()const;
};
