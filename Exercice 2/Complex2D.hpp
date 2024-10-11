#ifndef COMPLEX2D_HPP
#define COMPLEX2D_HPP

#include <iostream>

class Complex2D {
private:
    double reel;
    double imaginaire;

public:

    Complex2D();
    Complex2D(double reel, double imaginaire);
    Complex2D(double v);
    Complex2D(const Complex2D& autre_v);

    double getReel() const;
    double getImaginaire() const;
    void setReel(double reel);
    void setImaginaire(double imaginaire);

    Complex2D operator+(const Complex2D& autre) const;
    Complex2D operator-(const Complex2D& autre) const;
    Complex2D operator*(const Complex2D& autre) const;

};

#endif