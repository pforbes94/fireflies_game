#include "x11_helpers/x11_context.h"

namespace X11Helpers
{
X11Context::X11Context(unsigned int width, unsigned int height)
{
    mDisplay = XOpenDisplay(nullptr);

    unsigned long black = BlackPixel(mDisplay, DefaultScreen(mDisplay));
    unsigned long white = WhitePixel(mDisplay, DefaultScreen(mDisplay));
    mWindow = XCreateSimpleWindow(mDisplay, DefaultRootWindow(mDisplay),
                                   0, 0, width, height, 0, black, black);
    XSelectInput(mDisplay, mWindow, StructureNotifyMask);
    XMapWindow(mDisplay, mWindow);
    mGfxContext = XCreateGC(mDisplay, mWindow, 0, nullptr);
    XSetForeground(mDisplay, mGfxContext, white);

    for(;;) {
          XEvent e;
          XNextEvent(mDisplay, &e);
          if (e.type == MapNotify)
                break;
    }

    XDrawLine(mDisplay, mWindow, mGfxContext, 10, 60, 180, 20);

    XFlush(mDisplay);
}

X11Context::~X11Context()
{
    XCloseDisplay(mDisplay);
}
} // end namespace X11Helpers
