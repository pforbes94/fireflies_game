#ifndef CORE_HASH_H
#define CORE_HASH_H

#include <cstddef>
#include <functional>

namespace Core
{
template <typename THashValue>
void hash_combine(std::size_t& seed, const THashValue& value)
{
    seed ^= std::hash<THashValue>{}(value) + 0x9e3779b9 + (seed<<6) + (seed>>2);
}
} // end namespace Core

template void Core::hash_combine(std::size_t&, const std::uint8_t&);

#endif /* CORE_HASH_H */
