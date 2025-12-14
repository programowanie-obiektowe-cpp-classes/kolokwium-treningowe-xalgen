#include "zad1.hpp"

#include <vector>

double obliczMake(const std::vector < Tagliatelle>& t)
{
    double M=0.0;
    int porcja = 1;
    for (auto it = t.cbegin(); it != t.cend();it++, porcja++)
    {
        M += it->ileMaki(porcja);
    }

    if (M > 100)
    {
        throw 1;
    }
    else if (M > 50)
    {
        throw 1.0;
    }
    else
        return M;
}
