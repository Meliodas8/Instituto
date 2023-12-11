#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Configurar la semilla para generar números aleatorios
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generar un número aleatorio entre 1 y 100
    int numeroAleatorio = rand() % 100 + 1;

    int intentoUsuario;
    int intentosRealizados = 0;
    bool adivinado = false;

    std::cout << "Bienvenido al Juego de Adivinanzas!\n";
    std::cout << "Intenta adivinar el número secreto entre 1 y 100.\n";

    while (!adivinado) {
        // Solicitar el intento del usuario
        std::cout << "Introduce tu intento: ";
        std::cin >> intentoUsuario;

        // Incrementar el contador de intentos
        intentosRealizados++;

        // Comprobar si el usuario adivinó
        if (intentoUsuario == numeroAleatorio) {
            std::cout << "¡Felicidades! Adivinaste el número en " << intentosRealizados << " intentos.\n";
            adivinado = true;
        } else {
            // Proporcionar pistas sobre si el número es mayor o menor
            if (intentoUsuario < numeroAleatorio) {
                std::cout << "El número es mayor. Intenta de nuevo.\n";
            } else {
                std::cout << "El número es menor. Intenta de nuevo.\n";
            }
        }
    }
    system("pause");
    return 0;
}
