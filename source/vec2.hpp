/**
 * Programmiersprachen SoSe 2020
 * Aufgabensammlung 2
 * Lisa P.
 * vec2.hpp
*/

#ifndef VEC2_HPP
#define VEC2_HPP

// Vec2 data type definition
struct Vec2 {

    // Vec2 operators declaration
    Vec2& operator+=(Vec2 const& v);
    Vec2& operator-=(Vec2 const& v);
    Vec2& operator*=(float s);
    Vec2& operator/=(float s);

    /* TODO add member variables with 
       default member initialisation */

};


#endif // VEC2_HPP