/**
 * Programmiersprachen SoSe 2020
 * Aufgabensammlung 2
 * Lisa P.
 * tests.cpp
*/

#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include "vec2.hpp"
//#include "mat2.hpp"
//#include "circle.hpp"
//#include "rectangle.hpp"
//#include "color.hpp"

TEST_CASE("describe_vec2", "[vec2]") {
  Vec2 a; // requires that 0.0f == a.x and 0.0f == a.y
  Vec2 b{5.1f, -9.3f}; // requires that 5.1f == Approx(b.x) and -9.3f == Approx(b.y)
  REQUIRE(a.x == 0.0f);
  REQUIRE(a.y == 0.0f);
  REQUIRE(b.x == Approx(5.1f));
  REQUIRE(b.y == Approx(-9.3f));


}
int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
