#include <iostream>
#include "coord3d.h"
#include "funcs.h"

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
  std::cout << "farther from origin: " << farther << '\n';

  return 0;
}
