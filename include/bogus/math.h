// Copyright 2020 Jim Eliot

namespace bogus {
namespace math {

template<class T, class U>
auto add(T a, U b) -> decltype(a + b){
  return a + b;
}

}  // namespace math
}  // namespace bogus
