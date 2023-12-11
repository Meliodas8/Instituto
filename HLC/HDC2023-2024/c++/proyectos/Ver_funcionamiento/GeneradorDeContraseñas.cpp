#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

class GeneradorContrasenas {
public:
    std::string generarContrasena(int longitud, int incluirMayusculas, int incluirMinusculas, int incluirNumeros, int incluirEspeciales);
};

std::string GeneradorContrasenas::generarContrasena(int longitud, int incluirMayusculas, int incluirMinusculas, int incluirNumeros, int incluirEspeciales) {
    const std::string caracteresMayusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const std::string caracteresMinusculas = "abcdefghijklmnopqrstuvwxyz";
    const std::string caracteresNumeros = "0123456789";
    const std::string caracteresEspeciales = "!@#$%^&*()_+";

    std::string caracteresPermitidos;

    if (incluirMayusculas) {
        caracteresPermitidos += caracteresMayusculas;
    }
    if (incluirMinusculas) {
        caracteresPermitidos += caracteresMinusculas;
    }
    if (incluirNumeros) {
        caracteresPermitidos += caracteresNumeros;
    }
    if (incluirEspeciales) {
        caracteresPermitidos += caracteresEspeciales;
    }

    if (caracteresPermitidos.empty()) {
        std::cerr << "Error: Debes seleccionar al menos un conjunto de caracteres." << std::endl;
        return "";
    }

    std::string contrasenaGenerada;
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < longitud; ++i) {
        int indiceCaracter = rand() % caracteresPermitidos.length();
        contrasenaGenerada += caracteresPermitidos[indiceCaracter];
    }

    return contrasenaGenerada;
}

int main() {
    GeneradorContrasenas generador;

    int longitud;
    std::cout << "Ingrese la longitud de la contrasena: ";
    std::cin >> longitud;

    int incluirMayusculas, incluirMinusculas, incluirNumeros, incluirEspeciales;

    std::cout << "Incluir letras mayusculas (1: Si, 0: No): ";
    std::cin >> incluirMayusculas;

    std::cout << "Incluir letras minusculas (1: Si, 0: No): ";
    std::cin >> incluirMinusculas;

    std::cout << "Incluir numeros (1: Si, 0: No): ";
    std::cin >> incluirNumeros;

    std::cout << "Incluir caracteres especiales (1: Si, 0: No): ";
    std::cin >> incluirEspeciales;

    std::string contrasena = generador.generarContrasena(longitud, incluirMayusculas, incluirMinusculas, incluirNumeros, incluirEspeciales);

    if (!contrasena.empty()) {
        std::cout << "Contrasena generada: " << contrasena << std::endl;
    }

    system("pause");
    return 0;
}
