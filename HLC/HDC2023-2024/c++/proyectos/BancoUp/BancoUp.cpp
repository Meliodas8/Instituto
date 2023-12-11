#include <iostream>
#include <limits>

int main() {
    int edad, option;
    float total=1000, ingreso, egreso;
    std::cout << "Para entrar al banco ingrese su edad por favor: ";
    !(std::cin >> edad) || edad > 0;
    if ( edad >= 0 && edad <= 17 ) {
        std::cout << "Crece un poquito bebe\n";
    }
    else if ( edad >= 18 && edad <= 85 ) {
        std::cout << "Bienvenido al banco\n";
        while (true) {
            std::cout << "Por favor elija una de las opciones: \n";
            std::cout << "Opcion 1: Ingresar dinero\n";
            std::cout << "Opcion 2: Retirar dinero\n";
            std::cout << "Opcion 3: Ver total de dinero\n";
            std::cout << "Opcion 4: Salir\n";
            if(!(std::cin >> option) || option < 1 || option > 4) {
                std::cout << "Entrada no valida. Por favor, ingrese un numero.\n";
                std::cin.clear(); // Limpiar el estado del flujo
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descartar entrada incorrecta
                continue; // Volver al inicio del bucle
            }
            switch (option) {
            case 1:
                std::cout << "Escriba la cantidad de dinero que desea ingresar: ";
                if(std::cin >> ingreso && ingreso > 0) {
                    total+=ingreso;
                    std::cout << "Tienes en el banco $" << total << "\n";
                } else {
                    std::cout << "Entrada no valida. Por favor, ingrese un valor numerico.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                break;
            case 2:
                std::cout << "Escriba la cantidad de dinero que desea sacar: ";
                if (std::cin >> egreso && egreso > 0) {
                    if (total < egreso) {
                        std::cout << "No tienes suficiente dinero ratita, tienes $" << total << "\n";
                    } else {
                        total-=egreso;
                        std::cout << "Te quedan en el banco un total de $" << total << "\n";
                    }
                } else {
                    std::cout << "Entrada no valida. Por favor, ingrese un valor numerico.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                break;
            case 3:
                std::cout << "Este es el total del dinero que tiene en el banco $"<< total << "\n";
                break;
            case 4:
                std::cout << "Adios, te echare de menos :(\n";
                system("pause");
                return 0;
                break;
        
            default:
                break;
            }
        }
    }
    else if ( edad >= 86 && edad <= 120 ){
        std::cout << "Que tus hijos, amigos o familiares se hagan cargo, descansa gilipollas\n";
    } else {
        std::cout << "En serio no estas muerto, WoW\n";
    }
    system("pause");
    return 0;
}