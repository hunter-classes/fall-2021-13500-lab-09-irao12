#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"
// add functions here
double length(Coord3D * p){
  double x = (*p).x;
  double y = (*p).y;
  double z = (*p).z;
  return (sqrt(x*x + y*y + z*z));
}
