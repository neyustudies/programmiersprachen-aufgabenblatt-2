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

    // member variables
    float x = 0.0f;
    float y = 0.0f;

    // Vec2 operators declaration
    Vec2& operator+=(Vec2 const& v);
    Vec2& operator-=(Vec2 const& v);
    Vec2& operator*=(float s);
    Vec2& operator/=(float s);

};

// free functions
Vec2 operator + (Vec2 const& u, Vec2 const& v);
Vec2 operator - (Vec2 const& u, Vec2 const& v);
Vec2 operator * (Vec2 const& v, float s);
Vec2 operator / (Vec2 const& v, float s);
Vec2 operator * (float s, Vec2 const& v);

#endif // VEC2_HPP