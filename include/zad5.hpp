#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

template < typename It >
void sortujTagliatelle(It first, It last)
{
    std::sort(first, last, [](const Tagliatelle& a, const Tagliatelle& b) {
        return a.ileMaki(1) > b.ileMaki(1);
    });
}
