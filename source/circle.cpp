/**
 * Programmiersprachen SoSe 2020
 * Aufgabensammlung 2
 * Lisa P.
 * circle.cpp
*/

#include <cmath>
#include "circle.hpp"
#include "vec2.hpp"
#include "mat2.hpp"

Circle::Circle(Vec2 const& ctr, float r) {
  center_ = ctr;
  radius_ = r;
}

Circle::Circle(Vec2 const& ctr, float r, Color const& col) {
  center_ = ctr;
  radius_ = r;
  color_  = col;
}

// area: pi * r^2
float Circle::area() const {
  return M_PI * pow(radius_, 2);
}

// circumference: pi * radius * 2
float Circle::circumference() const {
  return M_PI * radius_ * 2;
}

float Circle::radius() const {
  return radius_;
}

Vec2 Circle::center() const {
  return center_;
}

Color Circle::color() const {
  return color_;
}

void Circle::draw(Window const& win) const {
  for(int i = 0; i <= 500; i++) {
    Vec2 start = make_rotation_mat2((2 * M_PI)/500 * i) * Vec2{radius_, 0} + center_;
    Vec2 end = make_rotation_mat2((2 * M_PI)/500 * (i+1)) * Vec2{radius_, 0} + center_;
    win.draw_line(start.x, start.y, end.x, end.y, color_.r, color_.g, color_.b);  
  }
}

