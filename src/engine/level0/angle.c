#include "angle.h"

Angle AngleGetNormalized( Angle source ) {
    return source % 360;
}
