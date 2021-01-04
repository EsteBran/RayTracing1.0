#pragma once

#include <cmath>
#include <cstdlib>
#include <limits>
#include <memory>

//usings

using std::shared_ptr;
using std::make_shared;
using std::sqrt;


//constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;


//utility functions

inline double degrees_to_radians(double degrees) {
	return degrees * pi / 180;
}


//return random real number in [0,1)
inline double random_double() {
	return rand() / (RAND_MAX + 1.0);
}

//returns random real number in [min, max)
inline double random_double(double min, double max) {
	return min + (max - min) * random_double();
}

//clamps values within range
inline double clamp(double x, double min, double max) {
	if (x < min) return min;
	if (x > max) return max;
	return x;
}

//common headers

#include "ray.h"
#include "vec3.h"

