#include <stdio.h>
#include <math.h>
int modul(int a, int b) {
    if (b == 0)
    {
        printf("Khong the tinh ra ket qua.\n");
        return 0;
    }
    while (a > b)
    {
        a = a - b;
        //a = 13, b = 3
        //loop 1 => a = 10;
        //loop 2 => a = 7;
        //loop 3 => a = 4;
        //loop 4 => a = 1; => dung chuong trinh 
    }
    return a;
}

int decimaltobinary(int decimalNumber)
{
    int binaryNumber = 0; // = results

    int i = 1;
    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
    //decimal a = 10
    // loop1 => bianry = binary + 10/2(5 du 2) * 1, i = 10, binary = 0
    // loop2 => binary = binary + 5 / 2(2 du 1) * 10, binary = 10
    // loop3 => binary = binary + 2 / 2(1 du 0) * 100, binary = 10
    // loop4 => binary = binary + 1 / 2 * 1000, binary = 1010
    // thuat toan
    // luoon luon phai nhap ra giay
    // cu chia cho 2 lay phan du nhan cho i(i moi lan lap tang len gap 10 lan)
    return binaryNumber;
}

void trueFalse() {
    if (3 > 2) printf("dung roi");
    // neu if co tu 2 dong tro len, phai co ngoac nhon
    // neu if chi co 1 dong lenh, khong bat buoc ngoac nhon
}

float laiSuat(float tienGoc, float lai, float nam)
{
    return tienGoc * pow((1 + ((lai / 100) / 12)), (12 * nam));
    // A = P * pow(1 + (laisuat/100) / ki han) ^ (ki han * so ki han)
    //bai 5: tinh tong tien nhan duoc sau khi guiwr tiet kiem n nam voi lai suat x%
}

// Hàm có 2 loại, trả về giá trị và không trả về giá trị
// Hàm không trả về giá trị, là hàm void

// devide, bai 2
//  a va b
//  if b == 0 => ko co gia tri.
//  while(a > b) => a = a - b, results++;

int devide(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    int results = 0; // Neu result chi chi co cong tru thif results = 0
                     // Neu results lien quan den nhan chia thi result = 1
    while (a > b)
    {
        a = a - b; // phep chia = phep tru nhieu lan
        // vidu, a =6, b = 2, results = reuslts + 1;
        // lan tru dau tien a = a - b;6 - 2 = 4 - 2 = 2 - 2 = 0 => result = 3
        results++;
    }
    return results;
}
int main()
{
    int a = 8;
    int b = 3;
    if (devide(a, b) == 0)
    {
        printf("Khong the tinh duoc ket qua.\n");
    }
    else
    {
        printf("ket qua cua phep chia a / b  la: %d\n", devide(a, b));
    }
    trueFalse();
    printf("%2.f", laiSuat(200000000, 7, 10));

    return 0;
}