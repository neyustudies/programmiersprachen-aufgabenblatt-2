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

// default initialization
Rectangle::Rectangle():
  max_{1.0f,1.0f},
  min_{0.0f,0.0f},
  color_{0.7f,0.7f,0.7f} {}

Rectangle::Rectangle(Vec2 const& max, Vec2 const& min) {
  max_ = max;
  min_ = min;
}

Rectangle::Rectangle(Vec2 const& max, Vec2 const& min, Color const& clr) {
  max_   = max;
  min_   = min;
  color_ = clr;
}

float Rectangle::width() const {
  float width = min_.x - max_.x;
  if (width < 0.0f) {
    return (-1) * width;
  } return width;
}

float Rectangle::height() const {
  float height = min_.y - max_.y;
  if (height < 0.0f) {
    return (-1) * height;
  } return height;
}

float Rectangle::area() const {
  return width() * height();
}

float Rectangle::circumference() const {
  return (width() + height()) * 2;
}

Vec2 Rectangle::max() const {
  return max_;
}

Vec2 Rectangle::min() const {
  return min_;
}

Color Rectangle::color() const {
  return color_;
}

void Rectangle::draw(Window const& win) const {
  win.draw_line(min_.x, min_.y, max_.x, min_.y, color_.r, color_.g, color_.b);
  win.draw_line(max_.x, min_.y, max_.x, max_.y, color_.r, color_.g, color_.b);
  win.draw_line(max_.x, max_.y, min_.x, max_.y, color_.r, color_.g, color_.b);
  win.draw_line(min_.x, max_.y, min_.x, min_.y, color_.r, color_.g, color_.b);
}

void Rectangle::draw(Window const& win, Color clr, float thickness, bool const& highlight_color) const {
  if(highlight_color == true) {
    clr = {(color_.r + 0.2f), (color_.g + 0.3f), (color_.b + 0.4f)};
  }
  win.draw_line(min_.x, min_.y, max_.x, min_.y, color_.r, color_.g, color_.b);
  win.draw_line(max_.x, min_.y, max_.x, max_.y, color_.r, color_.g, color_.b);
  win.draw_line(max_.x, max_.y, min_.x, max_.y, color_.r, color_.g, color_.b);
  win.draw_line(min_.x, max_.y, min_.x, min_.y, color_.r, color_.g, color_.b);
}