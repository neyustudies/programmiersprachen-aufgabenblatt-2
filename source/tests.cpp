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


// testing the correct initialization of instances
TEST_CASE("describe_vec2", "[vec2]") {
  Vec2 a;
  Vec2 b{5.1f, -9.3f};
  Vec2 c(-1.0f, 2.0f);

  REQUIRE(a.x_ == Approx(0.0f));
  REQUIRE(a.y_ == Approx(0.0f));
  REQUIRE(b.x_ == Approx(5.1f));
  REQUIRE(b.y_ == Approx(-9.3f));
  REQUIRE(c.x_ == Approx(-1.0f));
  REQUIRE(c.y_ == Approx(2.0f));

}

// testing addition of vec2
TEST_CASE("describe_addition_vec2", "[add]") {
  Vec2 v1;
  Vec2 v2{4.3f, 1.5f};
  Vec2 v3{3.0f, -2.7f};

  v1+=v2;
  v2+=v3;

  REQUIRE(v1.x_ == Approx(4.3f));
  REQUIRE(v1.y_ == Approx(1.5f));
  REQUIRE(v2.x_ == Approx(7.3f));
  REQUIRE(v2.y_ == Approx(-1.2f));

}

// testing multiplication of vec2
TEST_CASE("describe_multiplication_vec2", "[multiply]") {
  Vec2 v1;
  Vec2 v2{2.6f, 4.0f};
  Vec2 v3{-2.8f, 0.3f};
  float s = 2;

  v1*=s;
  v2*=s;
  v3*=s;

  REQUIRE(v1.x_ == Approx(0.0f));
  REQUIRE(v1.y_ == Approx(0.0f));
  REQUIRE(v2.x_ == Approx(5.2f));
  REQUIRE(v2.y_ == Approx(8.0f));
  REQUIRE(v3.x_ == Approx(-5.6f));
  REQUIRE(v3.y_ == Approx(0.6f));

}

// testing substraction of vec2
TEST_CASE("describe_substraction_vec2", "[substract]") {
  Vec2 v1{3.0f, 1.3f};
  Vec2 v2;
  Vec2 v3{6.3f, -4.7f};

  v1-=v2;
  v2-=v3;

  REQUIRE(v1.x_ == Approx(3.0f));
  REQUIRE(v1.y_ == Approx(1.3f));
  REQUIRE(v2.x_ == Approx(-6.3f));
  REQUIRE(v2.y_ == Approx(4.7f));

}

// testing division of vec2
TEST_CASE("describe_division_vec2", "[divide]") {
  Vec2 v1{8.0f, 4.6f};
  Vec2 v2{2.0f, 1.3f};
  Vec2 v3{1.1f, -3.3f};
  float s = 2;

  v1/=s;
  v2/=s;
  v3/=s;

  REQUIRE(v1.x_ == Approx(4.0f));
  REQUIRE(v1.y_ == Approx(2.3f));
  REQUIRE(v2.x_ == Approx(1.0f));
  REQUIRE(v2.y_ == Approx(0.65f));
  REQUIRE(v3.x_ == Approx(0.55f));
  REQUIRE(v3.y_ == Approx(-1.65f));

}




int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);

  
}
