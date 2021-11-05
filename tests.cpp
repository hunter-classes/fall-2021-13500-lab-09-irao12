#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <cmath>

// add your tests here
TEST_CASE("Testing length"){
  Coord3D pointP = {0, 0, 0}; //Distance of 0
  CHECK(length(&pointP) == 0);
  pointP = {10, 20, 30};
  CHECK(length(&pointP) == sqrt(10*10+20*20+30*30));
  pointP = {2, 2, 2};
  CHECK(length(&pointP) == sqrt(2*2*3));
  pointP = {10, 10, 10};
  CHECK(length(&pointP)== sqrt(10*10*3));
}
