/**
 * Programmiersprachen SoSe 2020
 * Aufgabensammlung 2
 * Lisa P.
 * rectangle.hpp
*/

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"


class Rectangle {

  public:
    Rectangle();
    Rectangle(Vec2 const& min, Vec2 const& max);
    Rectangle(Vec2 const& min, Vec2 const& max, Color const& clr);
    float area() const;
    float circumference() const;
    float width() const;
    float height() const;
    Vec2 max() const;
    Vec2 min() const;
    Color color() const;
    void draw(Window const& win) const;
    void draw(Window const& win, Color const& clr) const;
    void draw(Window const& win, Color clr, float thickness, bool const& highlight_color) const;

  private:
    Vec2 max_;
    Vec2 min_;
    Color color_;

};

#endif // RECTANGLE_HPP