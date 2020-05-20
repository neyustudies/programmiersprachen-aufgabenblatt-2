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

// default initialization
Circle::Circle():
  center_{400,400},
  radius_{100.0f},
  color_ {0.7f,0.7f,0.7f} {}

Circle::Circle(Vec2 const& ctr, float r) {
  center_ = ctr;
  radius_ = r;
}

Circle::Circle(Vec2 const& ctr, float r, Color const& clr) {
  center_ = ctr;
  radius_ = r;
  color_  = clr;
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

void Circle::draw(Window const& win, Color clr, float thickness, bool const& highlight_color) const {
  if(highlight_color == true) {
    clr = {(color_.r + 0.5f), (color_.g + 0.5f), (color_.b  + 0.0f)};
  }
  for(int i = 0; i <= 500; i++) {
    Vec2 start = make_rotation_mat2((2 * M_PI)/500 * i) * Vec2{radius_, 0} + center_;
    Vec2 end = make_rotation_mat2((2 * M_PI)/500 * (i+1)) * Vec2{radius_, 0} + center_;
    win.draw_line(start.x, start.y, end.x, end.y, color_.r, color_.g, color_.b, thickness);  
  }
}

bool Circle::is_inside(Vec2 const& point) const {
  float distance = sqrt(pow((point.x - center_.x), 2.0f) + pow((point.y - center_.y), 2.0f));
  if(distance > radius_) {
    return false;
  } return true;
}
