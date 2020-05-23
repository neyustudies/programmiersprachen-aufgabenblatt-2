/**
 * Programmiersprachen SoSe 2020
 * Aufgabensammlung 2
 * Lisa P.
 * rectangle.cpp
*/

#include "rectangle.hpp"

// default initialization
Rectangle::Rectangle():
  max_{600.0f, 400.0f},
  min_{400.0f, 200.0f},
  color_{0.7f, 0.7f, 0.7f} {}

Rectangle::Rectangle(Vec2 const& max, Vec2 const& min):
  max_{max},
  min_{min} {}

Rectangle::Rectangle(Vec2 const& max, Vec2 const& min, Color const& clr):
  max_{max},
  min_{min},
  color_{clr} {}

float Rectangle::circumference() const {
  float width  = max().x - min().x;
  float height = max().y - min().y;
  float circum = 2 * (width + height);
  if(circum < 0) {
    return circum * (-1);
  } return circum;
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
  win.draw_line(min().x, min().y, max().x, min().y, color().r, color().g, color().b);   // to the right
  win.draw_line(max().x, min().y, max().x, max().y, color().r, color().g, color().b);   // up
  win.draw_line(max().x, max().y, min().x, max().y, color().r, color().g, color().b);   // to the left
  win.draw_line(min().x, max().y, min().x, min().y, color().r, color().g, color().b);   // downward
}

void Rectangle::draw(Window const& win, Color clr, float thickness, bool const& highlight_color) const {
  if(highlight_color == true) {
    clr = {0.6, 0.9, 1.0};
  }
  win.draw_line(min().x, min().y, max().x, min().y, color().r, color().g, color().b, thickness); 
  win.draw_line(max().x, min().y, max().x, max().y, color().r, color().g, color().b, thickness); 
  win.draw_line(max().x, max().y, min().x, max().y, color().r, color().g, color().b, thickness); 
  win.draw_line(min().x, max().y, min().x, min().y, color().r, color().g, color().b, thickness); 
}

bool Rectangle::is_inside(Vec2 const& point) const {
  if(point.x < max().x && point.y < max().y && point.x > min().x && point.y > min().y){
    return true;
  } return false;   
}