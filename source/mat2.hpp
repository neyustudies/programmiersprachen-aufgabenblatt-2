/**
 * Programmiersprachen SoSe 2020
 * Aufgabensammlung 2
 * Lisa P.
 * mat2.hpp
*/

#ifndef MAT2_HPP
#define MAT2_HPP

#include <array>

// mat2 definition
struct Mat2 {

  // matrix layout:
  //   e_00   e_10
  //   e_01   e_11

  // default constructor
  Mat2();

  Mat2(float e_00, float e_10, float e_01, float e_11);

  // variables
  float e_00 = 1.0f;
  float e_10 = 0.0f;
  float e_01 = 0.0f;
  float e_11 = 1.0f;

  // operator *=
  Mat2& operator *=(Mat2 const& m);


};

// free functions
Mat2 operator*(Mat2 const& m1, Mat2 const& m2);


#endif //MAT2_HPP