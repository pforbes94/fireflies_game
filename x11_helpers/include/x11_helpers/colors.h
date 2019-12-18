#ifndef X11_HELPERS_COLORS_H
#define X11_HELPERS_COLORS_H

#include <string>
#include <unordered_map>

#include "core/color.h"

namespace X11Helpers
{
static std::unordered_map<Core::Color, std::string> DefaultColors{
    {Core::Color{.red = 0xFF, .green = 0x00, .blue = 0x00}, "Red"},
    {Core::Color{.red = 0x00, .green = 0xFF, .blue = 0x00}, "Green"},
    {Core::Color{.red = 0x00, .green = 0x00, .blue = 0xFF}, "Blue"},
    {Core::Color{.red = 0x00, .green = 0xFF, .blue = 0xFF}, "Cyan"},
    {Core::Color{.red = 0xFF, .green = 0x00, .blue = 0xFF}, "Fuchsia"},
    {Core::Color{.red = 0xFF, .green = 0xFF, .blue = 0x00}, "Yellow"},
};
} // end namespace X11Helpers

#endif /* X11_HELPERS_COLORS_H */
