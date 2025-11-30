#include <stdio.h>
#include <stdbool.h>

int main(){

    // SWITCH CASE
    int day = 0;
    printf("iltimos 1-7 gacha bolgan son tanlang: ");
    scanf("%d", &day);
    
    // switch case yordamida haftaning kunlarini chiqarish
    // switch case da biz aynan true boladigan qiymatni tekshiramiz
    // switch (shart) case: true bo'ladigan qiymatlar
    // agar ularning hech biri true bo'lmasa default ishlaydi
    
    switch (day)
    {
    case 1:
        printf("dushanba\n");
        break;
    case 2:
        printf("seshanba\n");
        break;
    case 3:
        printf("chorshanba\n");
        break;
    case 4:
        printf("payshanba\n");
        break;
    case 5:
        printf("juma\n");
        break;
    case 6:
        printf("shanba\n");
        break;
    case 7:
        printf("yakshanba\n");
        break;
    
    default:
        printf("iltimos 1-7 gacha bolgan sonni qayta tanlang!\n");
        main();
        break;
    }

    return 0;
};      