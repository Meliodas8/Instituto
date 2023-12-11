#include <iostream>

int main() {
    int operador,resresp,sumresp,mulresp,divresp;
    float n1,n2;
    std::cout << "Calculator\n";
    regresar:
    std::cout << "\nCual de estas operaciones quieres realizar: \n-1 para restar \n-2 para sumar \n-3 para multiplicar \n-4 para dividir o \n-5 para salir \nCual de estas opciones quieres?: ";
    std::cin >> operador;
    
    switch (operador)
    {
    case 1:
        std::cout << "Escribe los numeros con los que quieres realizar la operacion\n";
        std::cout << "Numero 1: ";std::cin >> n1;
        std::cout << "Numero 2: ";std::cin >> n2;
        resresp = n1 - n2;
        std::cout << "Resultado: " << resresp << "\n";
        system("pause");
        #ifdef _WIN32
        system("cls");  // For Windows
        #else
        system("clear");  // For Unix system
        #endif
        goto regresar;
        break;
    case 2:
        std::cout << "Escribe los numeros con los que quieres realizar la operacion\n";
        std::cout << "Numero 1: ";std::cin >> n1;
        std::cout << "Numero 2: ";std::cin >> n2;
        sumresp = n1 + n2;
        std::cout << "Resultado: " << sumresp << "\n";
        system("pause");
        #ifdef _WIN32
        system("cls");
        #else
        system("clear");
        #endif
        goto regresar;
        break;
    case 3:
        std::cout << "Escribe los numeros con los que quieres realizar la operacion\n";
        std::cout << "Numero 1: ";std::cin >> n1;
        std::cout << "Numero 2: ";std::cin >> n2;
        mulresp = n1 * n2;
        std::cout << "Resultado: " << mulresp << "\n";
        system("pause");
        #ifdef _WIN32
        system("cls");
        #else
        system("clear");
        #endif
        goto regresar;
        break;
    case 4:
        std::cout << "Escribe los numeros con los que quieres realizar la operacion\n";
        std::cout << "Numero 1: ";std::cin >> n1;
        std::cout << "Numero 2: ";std::cin >> n2;
        divresp = n1 / n2;
        std::cout << "Resultado: " << divresp << "\n";
        system("pause");
        #ifdef _WIN32
        system("cls");
        #else
        system("clear");
        #endif
        goto regresar;
        break;
    case 5:
        std::cout << "Saliendo, te voy a echar de menos :(\n";
        system("pause");
        return 0;
        break;
    
    default:
        std::cout << "solo es posible entre el 1 y el 5 (Por ahora jeje)\n";
        system("pause");
        #ifdef _WIN32
        system("cls");
        #else
        system("clear");
        #endif
        goto regresar;
        break;
    }
    system("pause");
    return 0;
}