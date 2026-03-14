#include <stdio.h>

int main() {
    int opcion;
    float cantidad, resultado;

    // Tasas de cambio aproximadas
    float GTQ_USD = 0.13;  // 1 quetzal = 0.13 USD
    float GTQ_EUR = 0.12;  // 1 quetzal = 0.12 EUR
    float USD_GTQ = 7.80;  // 1 USD = 7.80 GTQ
    float USD_EUR = 0.92;  // 1 USD = 0.92 EUR
    float EUR_GTQ = 8.50;  // 1 EUR = 8.50 GTQ
    float EUR_USD = 1.09;  // 1 EUR = 1.09 USD

    do {
        printf("\n===== CONVERSOR DE MONEDAS =====\n");
        printf("1. Quetzales a Dolares\n");
        printf("2. Quetzales a Euros\n");
        printf("3. Dolares a Quetzales\n");
        printf("4. Dolares a Euros\n");
        printf("5. Euros a Quetzales\n");
        printf("6. Euros a Dolares\n");
        printf("7. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 6) {
            printf("Ingrese la cantidad: ");
            scanf("%f", &cantidad);
        }

        switch(opcion) {
            case 1:
                resultado = cantidad * GTQ_USD;
                printf("Resultado: %.2f USD\n", resultado);
                break;

            case 2:
                resultado = cantidad * GTQ_EUR;
                printf("Resultado: %.2f EUR\n", resultado);
                break;

            case 3:
                resultado = cantidad * USD_GTQ;
                printf("Resultado: %.2f GTQ\n", resultado);
                break;

            case 4:
                resultado = cantidad * USD_EUR;
                printf("Resultado: %.2f EUR\n", resultado);
                break;

            case 5:
                resultado = cantidad * EUR_GTQ;
                printf("Resultado: %.2f GTQ\n", resultado);
                break;

            case 6:
                resultado = cantidad * EUR_USD;
                printf("Resultado: %.2f USD\n", resultado);
                break;

            case 7:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }

    } while(opcion != 7);

    return 0;
}