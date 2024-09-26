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

// Hàm có 2 loại, trả về giá trị và không trả về giá trị
// Hàm không trả về giá trị, là hàm void

//devide, bai 2
// a va b
// if b == 0 => ko co gia tri.
// while(a > b) => a = a - b, results++;

int devide(int a, int b) {
    if (b == 0)
    {
        return 0;
    } 
    int results = 0; //Neu result chi chi co cong tru thif results = 0
                     //Neu results lien quan den nhan chia thi result = 1
    while (a > b)
    {
        a = a - b; //phep chia = phep tru nhieu lan
        // vidu, a =6, b = 2, results = reuslts + 1;
        // lan tru dau tien a = a - b;6 - 2 = 4 - 2 = 2 - 2 = 0 => result = 3
        results++;
    }
    return results;
    
}
int main()
{
    int a = 8; int b = 3;
    if (devide(a, b) == 0)
    {
        printf("Khong the tinh duoc ket qua.\n");
    }
    else
    {
        printf("ket qua cua phep chia a / b  la: %d", devide(a, b));
    }
    
    
    return 0;
}