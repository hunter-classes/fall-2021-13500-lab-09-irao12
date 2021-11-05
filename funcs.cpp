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

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
  double length1 = length(p1);
  double length2 = length(p2);
  if (length1 < length2) return p2;
  return p1;
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
  (*ppos).x += (*pvel).x * dt;
  (*ppos).y += (*pvel).y * dt;
  (*ppos).z += (*pvel).z * dt;
}
