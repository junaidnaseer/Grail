
#include "sdlutils.h"

namespace grail {

  SDL_Color white = rgb(0xffffff);
  SDL_Color black = rgb(0x000000);

  SDL_Color rgb(uint32_t v) {
    SDL_Color r;
    r.r = (v >> 16) & 0xff;
    r.g = (v >>  8) & 0xff;
    r.b = v & 0xff;
    return r;
  }
}
