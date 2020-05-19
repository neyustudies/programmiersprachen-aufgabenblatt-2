/**
 * Programmiersprachen SoSe 2020
 * Aufgabensammlung 2
 * Lisa P.
 * rectangle.cpp
*/

#include <cmath>
#include "rectangle.hpp"
#include "vec2.hpp"
#include "color.hpp"

Rectangle::Rectangle():
  max_{1.0f,1.0f},
  min_{0.0f,0.0f},
  color_ {0.5f,0.5f,0.5f} {}


Rectangle::Rectangle(Vec2 const& min, Vec2 const& max) {
  max_ = max;
  min_ = min;
}

Rectangle::Rectangle(Vec2 const& min, Vec2 const& max, Color const& col) {
  max_   = max;
  min_   = min;
  color_ = col;
}

