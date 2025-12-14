#include "catch.hpp"

// Zad2
class Makaron
{

    public:
    virtual double ileMaki(unsigned P) const = 0;
        virtual ~Makaron() = default;
    static void gotujMakaron();
};


//void Makaron::gotujMakaron(std::string const& s) {}

// Zad1
class Tagliatelle : public Makaron
{
private:
    double L;
    double W;
    double R;
    static const double C;

public:
    Tagliatelle(double L_, double W_, double R_) : L(L_), W(W_), R(R_) {}
    Tagliatelle() : L(0.5), W(0.5), R(0.5) {}

    double ileMaki(unsigned P) const override { return P * L * W * (1. - R) * C;
    }


};
