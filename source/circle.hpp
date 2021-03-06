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
    Circle();
    Circle(Vec2 const& ctr, float r);
    Circle(Vec2 const& ctr, float r, Color const& clr);
    float circumference() const;
    float radius() const;
    Vec2 center() const;
    Color color() const;
    void draw(Window const& win) const;
    void draw(Window const& win, Color clr, float thickness, bool const& highlight_color) const;
    bool is_inside(Vec2 const& point) const;

  private:
    Vec2 center_;
    float radius_;
    Color color_;
    Color highlight_color_;


};

#endif // CIRCLE_HPP