#include "core/color.h"

#include "core/hash.h"

namespace Core
{
} // end namespace Core

namespace std
{
std::size_t hash<Core::Color>::operator()(const Core::Color& color) const noexcept
{
    using Core::hash_combine;

    std::size_t seed = std::hash<std::uint8_t>{}(color.red);
    hash_combine(seed, color.blue);
    hash_combine(seed, color.green);
    return seed;
}
} // end namespace std
