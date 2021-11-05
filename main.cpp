#include <iostream>
#include "coord3d.h"
#include "funcs.h"
#include <iomanip>

int main()
{
  Coord3D pointP = {10, 20, 30};
  std::cout << "Part A: Testing length\nPoint P: (10, 20, 30)" << '\n';
  std::cout << "length: " << length(&pointP)<< '\n' << '\n';

  Coord3D pointQ = {-20, 21, -22};
  std::cout << "Part B: Testing fartherFromOrigin" << '\n';
  std::cout << "Point P: (10, 20, 30)" << '\n';
  std::cout << "Point Q: (-20, 21, -22)" << '\n';

  std::cout << "Address of P: " << &pointP << '\n';
  std::cout << "Address of Q: " << &pointQ << '\n';

  Coord3D * farther = fartherFromOrigin(&pointP, &pointQ);
  std::cout << "farther from origin: " << farther << "\n\n";

  std::cout << "Part C: Testing move" << '\n';

  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  std::cout << "Original position:" << '\n';
  std::cout << "x: " << std::setw(6) << pos.x << " y: " << std::setw(6) << pos.y << " z: " << std::setw(6) << pos.z << '\n';
  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << "Position after move:" << '\n';
  std::cout << "x: " << std::setw(6) << pos.x << " y: " << std::setw(6) << pos.y << " z: " << std::setw(6) << pos.z << '\n';


  return 0;
}
