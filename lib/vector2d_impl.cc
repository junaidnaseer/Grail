// vim: set noexpandtab:

#include "vector2d.cc"

namespace grail {

template class Vector2d<int32_t, 0>;
template class Vector2d<int32_t, 1>;

template VirtualPosition operator*(double, VirtualPosition);
template VirtualPosition operator*(VirtualPosition, double);
template VirtualPosition::Scalar operator*(VirtualPosition, VirtualPosition);
template bool operator==(VirtualPosition, VirtualPosition);
template bool operator!=(VirtualPosition, VirtualPosition);
template std::ostream& operator<<(std::ostream&, VirtualPosition);

#define CONV(A, B) template B conv< A , B >( A );

CONV(PhysicalPosition, VirtualPosition)
CONV(VirtualPosition, PhysicalPosition)
CONV(PhysicalPosition, SDL_Rect)
CONV(const SDL_MouseButtonEvent&, VirtualPosition)
CONV(const SDL_MouseMotionEvent&, VirtualPosition)
CONV(VirtualPosition, SDL_Rect)

} // namespace grail


