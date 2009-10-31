
#include "vector2d.cc"

template class Vector2d<int32_t, 0>;
template class Vector2d<int32_t, 1>;

#define CONV(A, B) template B conv< A , B >( A )

CONV(PhysicalPosition, VirtualPosition);
CONV(VirtualPosition, PhysicalPosition);
CONV(VirtualPosition, SDL_Rect);
