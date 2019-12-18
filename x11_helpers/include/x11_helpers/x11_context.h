#ifndef X11_HELPERS_X11_CONTEXT_H
#define X11_HELPERS_X11_CONTEXT_H

#include <memory>

#include <X11/Xlib.h>

#include "core/color.h"

namespace X11Helpers
{
class X11Context
{
public:
    X11Context(unsigned int width, unsigned int height);

    ~X11Context();

    template <typename TVectorRange>
    void drawVectors(const TVectorRange& vectorRange, const Core::Color& color);

private:
    Display* mDisplay;

    Window mWindow;

    GC mGfxContext;
};
} // end namespace X11Helpers

#endif /* X11_HELPERS_X11_CONTEXT_H */

#include "x11_helpers/x11_context.hpp"
