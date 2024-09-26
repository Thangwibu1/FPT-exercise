#include <stdio.h>
#include <math.h>
// int modul(int a, int b) {
//     if (b == 0)
//     {
//         printf("Khong the tinh ra ket qua.\n");
//         return 0;
//     }
//     while (a > b)
//     {
//         a = a - b;
//     }
//     return a;
// }

float laiSuat(float tienGoc, float lai, float nam) {
    return tienGoc * pow((1 + ((lai / 100) / 12)), (12 * nam));
}

int main()
{
    printf("%.2f", laiSuat(200000000, 7, 10));   
    return 0;
}