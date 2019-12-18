#ifndef X11_HELPERS_X11_CONTEXT_HPP
#define X11_HELPERS_X11_CONTEXT_HPP

#include "x11_helpers/x11_context.h"

namespace X11Helpers
{
template <typename TVectorRange>
void X11Context::drawVectors(const TVectorRange& /* vectorRange */, const Core::Color& /* color */)
{
    // TODO: static assert on vector scalar type
}
} // end namespace X11Helpers

#endif /* X11_HELPERS_X11_CONTEXT_HPP */
