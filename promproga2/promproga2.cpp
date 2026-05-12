#include <stdio.h>
#include <locale.h>

int multiply(int a, int b) {
    return a * b;
}

int factorial(int n) {
    if (n < 0) {
        return 0;  
    }
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    printf(",Добрый, день, молодежь,");
    printf("последний commit ура");
    int num;
    setlocale(LC_ALL, "RUSSIAN");

    printf("Введите целое неотрицательное число(pls): ");
    if (scanf("%d", &num) != 1) {
        printf("Ошибка ввода. вы ввели недопустимое начение\n");
        return 1;
    }

    
    printf("5 * 3 = %d\n", multiply(5, 3));	
    int fact = factorial(num);
    printf("Факториал числа %d равен %d\n", num, fact);

    return 0;
}
