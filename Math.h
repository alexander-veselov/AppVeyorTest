#pragma once

namespace Math
{
  template <typename T>
  T abs(T number)
  {
    return number < 0 ? -number : number;
  }
}