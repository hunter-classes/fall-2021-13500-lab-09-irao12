#include <iostream>
#include "coord3d.h"
#include "funcs.h"

int main()
{
  Coord3D pointP = {10, 20, 30};
  std::cout << "Point P: (10, 20, 30)" << '\n';
  std::cout << "length: " << length(&pointP)<< '\n';
  return 0;
}
