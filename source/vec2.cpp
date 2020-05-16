/**
 * Programmiersprachen SoSe 2020
 * Aufgabensammlung 2
 * Lisa P.
 * vec2.cpp
*/

#include "vec2.hpp"

//default constructor
Vec2::Vec2():
  x_{0.0f}, 
  y_{0.0f} {}

// value constructor
Vec2::Vec2 (float x, float y):
  x_{x},
  y_{y} {}

// definition addition for Vec2
Vec2& Vec2::operator+=(Vec2 const& v) {
  x_ += v.x_;
  y_ += v.y_;
}

// definition multiplication for Vec2
Vec2& Vec2::operator*=(float s) {
  x_ *= s;
  y_ *= s;
}

// definition subtraction for Vec2
Vec2& Vec2::operator-=(Vec2 const& v) {
  x_ -= v.x_;
  y_ -= v.y_;
}

// definition division for Vec2
Vec2& Vec2::operator/=(float s) {
  x_ /= s;
  y_ /= s;
}