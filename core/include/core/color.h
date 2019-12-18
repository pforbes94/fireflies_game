#ifndef CORE_COLOR_H
#define CORE_COLOR_H

#include <cstdint>
#include <cstddef>
#include <functional>

namespace Core
{
struct Color
{
    std::uint8_t red;
    std::uint8_t blue;
    std::uint8_t green;
};
} // end namespace Core

namespace std
{
template <>
struct hash<Core::Color>
{
    std::size_t operator()(const Core::Color& color) const noexcept;
};
} // end namespace std

#endif /* CORE_COLOR_H */
