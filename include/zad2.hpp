#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

class Penne : public Makaron
{
public:
    double ileMaki(unsigned P) override const { return P * L * W * (1. - R) * C; }

};

// tutaj definicja metody gotujMakaron