/******************************************************************************
*	Description:	Point declaration File
*			Represents a Point in a 2D Space
*	Author:		Carlos R. Arias
*	Date:		2018 - 05 - 30
******************************************************************************/
#pragma once

#include <string>
using std::string;

class Point{
	double _x, _y;
public:
	Point(double=0.0, double=0.0);
	string ToString()const;
	double Distance(const Point&)const;
	double GetX()const;
	double GetY()const;
};
