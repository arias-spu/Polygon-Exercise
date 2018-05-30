/******************************************************************************
*	Description:	Point definition File
*	Author:		Carlos R. Arias
*	Date:		2018 - 05 - 30
******************************************************************************/


#include "point.h"
#include <string>
#include <sstream>
#include <cmath>
using std::string;
using std::stringstream;


Point::Point(double x, double y): _x(x), _y(y){
}
string Point::ToString()const{
	stringstream retVal;
	retVal << "{ \"x\": " << _x << ", \"y\": " << _y << "}";
	return retVal.str();
}
double Point::Distance(const Point& point)const{
	return sqrt(pow(_x - point._x, 2.0) + pow(_y - point._y, 2.0));
}
double Point::GetX()const{
	return _x;
}
double Point::GetY()const{
	return _y;
}
