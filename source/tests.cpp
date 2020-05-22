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
#include "mat2.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include "color.hpp"


/* ---------------------
 *    V E C T O R S    
 * --------------------*/

// testing initialization of instances
TEST_CASE("describe_vec2", "[vec2]") {
  Vec2 a;
  Vec2 b{5.1f, -9.3f};
  Vec2 c{-1.0f, 2.0f};
  REQUIRE(a.x == Approx(0.0f));
  REQUIRE(a.y == Approx(0.0f));
  REQUIRE(b.x == Approx(5.1f));
  REQUIRE(b.y == Approx(-9.3f));
  REQUIRE(c.x == Approx(-1.0f));
  REQUIRE(c.y == Approx(2.0f));

}

// testing addition of vec2
TEST_CASE("describe_addition_vec2", "[addition vec2]") {
  Vec2 v1;
  Vec2 v2{4.3f, 1.5f};
  Vec2 v3{3.0f, -2.7f};
  v1 += v2;
  v2 += v3;
  REQUIRE(v1.x == Approx(4.3f));
  REQUIRE(v1.y == Approx(1.5f));
  REQUIRE(v2.x == Approx(7.3f));
  REQUIRE(v2.y == Approx(-1.2f));

}

// testing multiplication of vec2
TEST_CASE("describe_multiplication_vec2", "[multiplication vec2]") {
  Vec2 v1;
  Vec2 v2{2.6f, 4.0f};
  Vec2 v3{-2.8f, 0.3f};
  float s = 2;
  v1 *= s;
  v2 *= s;
  v3 *= s;
  REQUIRE(v1.x == Approx(0.0f));
  REQUIRE(v1.y == Approx(0.0f));
  REQUIRE(v2.x == Approx(5.2f));
  REQUIRE(v2.y == Approx(8.0f));
  REQUIRE(v3.x == Approx(-5.6f));
  REQUIRE(v3.y == Approx(0.6f));

}

// testing substraction of vec2
TEST_CASE("describe_substraction_vec2", "[subtraction vec2]") {
  Vec2 v1{3.0f, 1.3f};
  Vec2 v2;
  Vec2 v3{6.3f, -4.7f};
  v1 -= v2;
  v2 -= v3;
  REQUIRE(v1.x == Approx(3.0f));
  REQUIRE(v1.y == Approx(1.3f));
  REQUIRE(v2.x == Approx(-6.3f));
  REQUIRE(v2.y == Approx(4.7f));

}

// testing division of vec2
TEST_CASE("describe_division_vec2", "[division vec2]") {
  Vec2 v1{8.0f, 4.6f};
  Vec2 v2{2.0f, 1.3f};
  Vec2 v3{1.1f, -3.3f};
  float s = 2;
  v1 /= s;
  v2 /= s;
  v3 /= s;
  REQUIRE(v1.x == Approx(4.0f));
  REQUIRE(v1.y == Approx(2.3f));
  REQUIRE(v2.x == Approx(1.0f));
  REQUIRE(v2.y == Approx(0.65f));
  REQUIRE(v3.x == Approx(0.55f));
  REQUIRE(v3.y == Approx(-1.65f));

}

/* -----------------------------------------
 *   F R E E   F U N C T I O N S   V E C 2 
 * ----------------------------------------*/

// testing addition
TEST_CASE("describe_addition", "[addition vec2]") {
  Vec2 v1;
  Vec2 v2{4.3f, 1.5f};
  Vec2 v3{3.0f, -2.7f};
  v1 = v1 + v2;
  v2 = v2 + v3;
  REQUIRE(v1.x == Approx(4.3f));
  REQUIRE(v1.y == Approx(1.5f));
  REQUIRE(v2.x == Approx(7.3f));
  REQUIRE(v2.y == Approx(-1.2f));
}

// testing substraction
TEST_CASE("describe_substraction", "[substraction vec2]") {
  Vec2 v1{3.0f, 1.3f};
  Vec2 v2;
  Vec2 v3{6.3f, -4.7f};
  v1 = v1 - v2;
  v2 = v2 - v3;
  REQUIRE(v1.x == Approx(3.0f));
  REQUIRE(v1.y == Approx(1.3f));
  REQUIRE(v2.x == Approx(-6.3f));
  REQUIRE(v2.y == Approx(4.7f));
}

// testing multiplication
TEST_CASE("describe_multiplication", "[multiplication vec2]") {
  Vec2 v1;
  Vec2 v2{2.6f, 4.0f};
  Vec2 v3{-2.8f, 0.3f};
  float s = 2;
  v1 = v1 * s;
  v2 = v2 * s;
  v3 = s * v3;
  REQUIRE(v1.x == Approx(0.0f));
  REQUIRE(v1.y == Approx(0.0f));
  REQUIRE(v2.x == Approx(5.2f));
  REQUIRE(v2.y == Approx(8.0f));
  REQUIRE(v3.x == Approx(-5.6f));
  REQUIRE(v3.y == Approx(0.6f));
}

// testing division
TEST_CASE("describe_division", "[division vec2]") {
  Vec2 v1{8.0f, 4.6f};
  Vec2 v2{2.0f, 1.3f};
  Vec2 v3{1.1f, -3.3f};
  float s = 2;
  v1 = v1 / s;
  v2 = v2 / s;
  v3 = v3 / s;
  REQUIRE(v1.x == Approx(4.0f));
  REQUIRE(v1.y == Approx(2.3f));
  REQUIRE(v2.x == Approx(1.0f));
  REQUIRE(v2.y == Approx(0.65f));
  REQUIRE(v3.x == Approx(0.55f));
  REQUIRE(v3.y == Approx(-1.65f));
}

/* ---------------------
 *    M A T R I C E S  
 * --------------------*/

// testing initialization of instances
TEST_CASE("describe_mat2", "[mat2]") {
  Mat2 m1;
  Mat2 m2{2.5f, 1.5f, 1.0f, 2.0f};
  REQUIRE(m1.e_00 == Approx(1.0f));
  REQUIRE(m1.e_10 == Approx(0.0f));  
  REQUIRE(m1.e_01 == Approx(0.0f));
  REQUIRE(m1.e_11 == Approx(1.0f));
  REQUIRE(m2.e_00 == Approx(2.5f)); 
  REQUIRE(m2.e_10 == Approx(1.5f));
  REQUIRE(m2.e_01 == Approx(1.0f));
  REQUIRE(m2.e_11 == Approx(2.0f));

}

// testing operator*= of mat2
TEST_CASE("describe_operator*=", "[multiplication mat2]") {
  Mat2 m1;
  Mat2 m2{2.0f, 3.0f, 4.0f, 5.0f};
  Mat2 m3{1.0f, 2.0f, -1.0f, 4.0f};
  m2 *= m1;
  m3 *= m2;
  REQUIRE(m2.e_00 == Approx(2.0f)); 
  REQUIRE(m2.e_10 == Approx(3.0f));
  REQUIRE(m2.e_01 == Approx(4.0f));
  REQUIRE(m2.e_11 == Approx(5.0f));
  REQUIRE(m3.e_00 == Approx(10.0f)); 
  REQUIRE(m3.e_10 == Approx(13.0f));
  REQUIRE(m3.e_01 == Approx(14.0f));
  REQUIRE(m3.e_11 == Approx(17.0f));

}

// testing determinant of mat2
TEST_CASE("describe_determinant", "[determinant mat2]") {
  Mat2 m1;
  Mat2 m2{2.0f, 6.0f, 4.0f, 8.0f};
  Mat2 m3{4.0f, 2.0f, 3.0f, 2.0f};
  REQUIRE(m1.det() == Approx(1.0f));
  REQUIRE(m2.det() == Approx(-8.0f));
  REQUIRE(m3.det() == Approx(2.0f));

}

/* -----------------------------------------
 *   F R E E   F U N C T I O N S   M A T 2 
 * ----------------------------------------*/

// testing operator* of mat2
TEST_CASE("describe_operator*", "[free multiplication mat2]") {
  Mat2 m1;
  Mat2 m2{2.0f, 3.0f, 4.0f, 5.0f};
  Mat2 m3{1.0f, 2.0f, -1.0f, 4.0f};
  Mat2 m4 = m1 * m2;
  Mat2 m5 = m2 * m3;
  REQUIRE(m4.e_00 == Approx(2.0f)); 
  REQUIRE(m4.e_10 == Approx(3.0f));
  REQUIRE(m4.e_01 == Approx(4.0f));
  REQUIRE(m4.e_11 == Approx(5.0f));
  REQUIRE(m5.e_00 == Approx(-1.0f));
  REQUIRE(m5.e_10 == Approx(16.0f));
  REQUIRE(m5.e_01 == Approx(-1.0f));
  REQUIRE(m5.e_11 == Approx(28.0f));

}

// testing operator* of matrix and vector and vice versa
TEST_CASE("describe_free_operator*_mat_vec", "[multiplication mat2 vec2]") {
  Mat2 m1;
  Mat2 m2{2.0f, -4.0f, 1.2f, 3.0f};
  Vec2 v1;
  Vec2 v2{5.0f, -9.3f};
  v1 = m1 * v1;
  v2 = v2 * m2;
  REQUIRE(v1.x == Approx(0.0f));
  REQUIRE(v1.y == Approx(0.0f));
  REQUIRE(v2.x == Approx(47.2f));
  REQUIRE(v2.y == Approx(-21.9f));

}

// testing inverse of mat2
TEST_CASE("describe_inverse", "[inverse mat2]") {
  Mat2 m0 = inverse({});
  Mat2 m1 = inverse({3.0f, 3.5f, 5.0f, 6.0f});
  Mat2 m2 = inverse({1.0f, 2.0f, -4.0f, -8.0f}); // if-case: det == 0 
  REQUIRE(m0.e_00 == Approx(1.0f));
  REQUIRE(m0.e_10 == Approx(0.0f));
  REQUIRE(m0.e_01 == Approx(0.0f));
  REQUIRE(m0.e_11 == Approx(1.0f));
  REQUIRE(m1.e_00 == Approx(12.0f)); 
  REQUIRE(m1.e_10 == Approx(-7.0f));
  REQUIRE(m1.e_01 == Approx(-10.0f));
  REQUIRE(m1.e_11 == Approx(6.0f));

}

// testing transpose of mat2
TEST_CASE("describe_transpose", "[transpose mat2]") {
  Mat2 m1 = transpose({});
  Mat2 m2 = transpose({1.0f, 2.0f, 3.0f, 4.0f});
  REQUIRE(m1.e_00 == Approx(1.0f)); 
  REQUIRE(m1.e_10 == Approx(0.0f));
  REQUIRE(m1.e_01 == Approx(0.0f));
  REQUIRE(m1.e_11 == Approx(1.0f));
  REQUIRE(m2.e_00 == Approx(1.0f)); 
  REQUIRE(m2.e_10 == Approx(3.0f));
  REQUIRE(m2.e_01 == Approx(2.0f));
  REQUIRE(m2.e_11 == Approx(4.0f));

}

// testing rotation of mat2
TEST_CASE("describe_rotate", "[rotate mat2]") {
  Mat2 m1 = make_rotation_mat2(90.0f);
  Mat2 m2 = make_rotation_mat2(45.0f);
  REQUIRE(m1.e_00 == Approx(-0.44807f));
  REQUIRE(m1.e_10 == Approx(-0.894f));
  REQUIRE(m1.e_01 == Approx(0.894f));
  REQUIRE(m1.e_11 == Approx(-0.44807f));
  REQUIRE(m2.e_00 == Approx(0.52532f)); 
  REQUIRE(m2.e_10 == Approx(-0.8509f));
  REQUIRE(m2.e_01 == Approx(0.8509f));
  REQUIRE(m2.e_11 == Approx(0.52532f));

}


/* ---- A u f g a b e n   2 . 9  f f ----------------------------------------*/

TEST_CASE("describe_circumference_circle", "[circum circle]") {
  Circle c1{Vec2{1, 2}, 5};
  Circle c2{Vec2{5, 2}, 1};
  REQUIRE(c1.circumference() == Approx(c1.radius() * 2 * M_PI));
  REQUIRE(c2.circumference() == Approx(2 * M_PI));

}

TEST_CASE("describe_circumference_rectangle", "[circum rectangle]") {
  Rectangle r1{Vec2{1, 2}, Vec2{2, 3}};
  Rectangle r2{Vec2{5, 2}, Vec2{1, 5}};
  REQUIRE(r1.circumference() == Approx(4.0f));
  REQUIRE(r2.circumference() == Approx(2.0f));
}

TEST_CASE("describe_color", "[color]") {
  Color clr1{};
  Color clr2{0.3f, 0.6f, 1.0f};
  REQUIRE(clr1.r == Approx(0.7f));
  REQUIRE(clr1.g == Approx(0.7f));
  REQUIRE(clr1.b == Approx(0.7f));
  REQUIRE(clr2.r == Approx(0.3f));
  REQUIRE(clr2.g == Approx(0.6f));
  REQUIRE(clr2.b == Approx(1.0f));
}

TEST_CASE("describe_is_inside_circle", "[is_inside circle]") {
  Circle cir1{};
  Circle cir2{Vec2{400, 400}, 100};
  Vec2 p1{250.0f, 250.0f};
  Vec2 p2{450.0f, 450.0f};
  REQUIRE(cir1.is_inside(p1) == false);
  REQUIRE(cir1.is_inside(p2) == true);  
  REQUIRE(cir2.is_inside(p1) == false);
  REQUIRE(cir2.is_inside(p2) == true);

}

TEST_CASE("describe_is_inside_rectangle", "[is_inside rectangle]") {
  Rectangle r1{};
  Rectangle r2{Vec2{700, 400}, Vec2{400, 200}};
  Vec2 p1{450.0f, 380.0f};
  Vec2 p2{850.0f, 350.0f};
  REQUIRE(r1.is_inside(p1) == true);
  REQUIRE(r1.is_inside(p2) == false);
  REQUIRE(r2.is_inside(p1) == true);
  REQUIRE(r2.is_inside(p2) == false);

}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
  
}

