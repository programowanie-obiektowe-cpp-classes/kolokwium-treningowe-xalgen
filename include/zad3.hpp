#include "zad1.hpp"
#include <cstdint>
#include <functional>

template < typename Sos >
std::size_t polejSosem(const Tagliatelle& makaron, const Sos& sos)
{
    return sos.polej(makaron);
}