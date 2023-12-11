#include <iostream>
#include <iomanip>

class Banco {
private:
    float saldo;

public:
    Banco() : saldo(0.0) {}

    void depositar(float cantidad) {
        if (cantidad > 0) {
            saldo += cantidad;
            std::cout << "Deposito exitoso. Saldo actual: $" << std::fixed << std::setprecision(2) << saldo << "\n";
        } else {
            std::cout << "La cantidad ingresada no es valida.\n";
        }
    }

    void retirar(float cantidad) {
        if (cantidad > 0 && cantidad <= saldo) {
            saldo -= cantidad;
            std::cout << "Retiro exitoso. Saldo actual: $" << std::fixed << std::setprecision(2) << saldo << "\n";
        } else {
            std::cout << "No tienes suficientes fondos o la cantidad ingresada no es valida.\n";
        }
    }

    void consultarSaldo() {
        std::cout << "Saldo actual: $" << std::fixed << std::setprecision(2) << saldo << "\n";
    }
};

int main() {
    Banco cuentaBancaria;

    int opcion;
    float cantidad;

    std::cout << "Bienvenido al Simulador de Banco!\n";

    do {
        std::cout << "\nOpciones:\n";
        std::cout << "1. Depositar\n";
        std::cout << "2. Retirar\n";
        std::cout << "3. Consultar Saldo\n";
        std::cout << "4. Salir\n";
        std::cout << "Ingrese el numero de la opcion deseada: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese la cantidad a depositar: $";
                std::cin >> cantidad;
                cuentaBancaria.depositar(cantidad);
                break;
            case 2:
                std::cout << "Ingrese la cantidad a retirar: $";
                std::cin >> cantidad;
                cuentaBancaria.retirar(cantidad);
                break;
            case 3:
                cuentaBancaria.consultarSaldo();
                break;
            case 4:
                std::cout << "Gracias por usar el Simulador de Banco. ¡Hasta luego!\n";
                break;
            default:
                std::cout << "Opcion no valida. Por favor, ingrese un numero valido.\n";
        }

    } while (opcion != 4);

    return 0;
}
