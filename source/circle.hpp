/**
 * Programmiersprachen SoSe 2020
 * Aufgabensammlung 2
 * Lisa P.
 * circle.hpp
*/

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"

class Circle {
  public:
    Circle(Vec2 const& ctr, float r);
    Circle(Vec2 const& ctr, float r, Color const& clr);
    float area() const;
    float circumference() const;
    float radius() const;
    Vec2 center() const;
    Color color() const;
    void draw(Window const& win) const;
    void draw(Window const& win, Color const& clr) const;

  private:
    Vec2 center_;
    float radius_ = 0.0f;
    Color color_;


};

#endif // CIRCLE_HPP