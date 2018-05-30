/******************************************************************************
*	Description:	Polygon definition File
*	Author:		Carlos R. Arias
*	Date:		2018 - 05 - 30
******************************************************************************/
#include "point.h"
#include "polygon.h"
#include <sstream>
#include <string>
using std::string;
using std::stringstream;

Polygon::Polygon(size_t sides)
{
}
Polygon::Polygon(const Polygon& other)
{
}
Polygon::~Polygon()
{
}
bool Polygon::AddCorner(const Point& corner){
}
Polygon& Polygon::operator=(const Polygon& rhs){
}
string Polygon::ToString()const{
	stringstream retVal;
	retVal << "{ \"sides\":" << _sides << ", \"corners\": [";
	for (size_t i = 0; i < _sides; i++){
		if (i != _sides - 1)
			retVal << _points[i].ToString() << ", ";
		else
			retVal << _points[i].ToString() << "]}";
	}
	return retVal.str();
}

double Polygon::Area()const{
	// See: http://mathworld.wolfram.com/PolygonArea.html
	// See: https://www.wikihow.com/Calculate-the-Area-of-a-Polygon
	return -1;
}

double Polygon::Perimeter()const{
	return -1;
}
