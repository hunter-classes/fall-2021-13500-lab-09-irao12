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

TEST_CASE("Testing fartherFromOrigin: normal cases"){
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};
  CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);
  pointP = {0, 10 ,0};
  CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointQ);
  pointQ = {1000, 20, 0};
  CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointQ);
}

TEST_CASE("Testing fartherFromOrigin: equal cases"){
  //If lengths are equal, first pointer is returned
  Coord3D pointP = {10, 10, 10};
  Coord3D pointQ = {10, 10, 10};
  CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);
  CHECK(fartherFromOrigin(&pointP, &pointQ) != &pointQ);
  pointP = {10, -20, 30};
  pointQ = {-30, 20, -10};
  CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);
  CHECK(fartherFromOrigin(&pointP, &pointQ) != &pointQ);
}
