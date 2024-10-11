#include "Complex2D.hpp"
#include <iostream>

int main() {
    Complex2D z1(5.0, 7.0);
    Complex2D z2(-2.0, 2.0);
    
    std::cout << "z1 = (" << z1.getReel() << ", " << z1.getImaginaire() << "i)" << std::endl;
    std::cout << "z2 = (" << z2.getReel() << ", " << z2.getImaginaire() << "i)" << std::endl;

    Complex2D somme = z1 + z2;
    std::cout << "z1 + z2 = (" << somme.getReel() << ", " << somme.getImaginaire() << "i)" << std::endl;

    Complex2D difference = z1 - z2;
    std::cout << "z1 - z2 = (" << difference.getReel() << ", " << difference.getImaginaire() << "i)" << std::endl;

    Complex2D produit = z1 * z2;
    std::cout << "z1 * z2 = (" << produit.getReel() << ", " << produit.getImaginaire() << "i)" << std::endl;

    return 0;
}
