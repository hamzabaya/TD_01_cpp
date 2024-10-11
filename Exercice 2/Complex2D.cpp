#include "Complex2D.hpp"


Complex2D::Complex2D() : reel(0.0), imaginaire(0.0) {}

Complex2D::Complex2D(double r, double i) : reel(r), imaginaire(i) {}

Complex2D::Complex2D(double v) : reel(v), imaginaire(v) {}

Complex2D::Complex2D(const Complex2D& autre_v) : reel(autre_v.reel), imaginaire(autre_v.imaginaire) {}

double Complex2D::getReel() const {
    return reel;
}

double Complex2D::getImaginaire() const {
    return imaginaire;
}

void Complex2D::setReel(double reel) {
    reel = reel;
}

void Complex2D::setImaginaire(double imaginaire) {
    imaginaire = imaginaire;
}

Complex2D Complex2D::operator+(const Complex2D& other) const {
    return Complex2D(reel + other.reel, imaginaire + other.imaginaire);
}

Complex2D Complex2D::operator-(const Complex2D& other) const {
    return Complex2D(reel - other.reel, imaginaire - other.imaginaire);
}

Complex2D Complex2D::operator*(const Complex2D& other) const {
    double newReel = reel * other.reel - imaginaire * other.imaginaire;
    double newImaginaire = reel * other.imaginaire + imaginaire * other.reel;
    return Complex2D(newReel, newImaginaire);
}

