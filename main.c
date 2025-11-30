#include <stdio.h>
#include <math.h>

int main(){

  // USER INPUT
  // biz printf() funksyasini o'rgandik 
  // endi o'zimizni qiymatimizni kiritish uchun scanf() funksiyasini o'rganamiz
  // scanf() funksyasi biz kiritgan qiymatni o'zgaruvchiga saqlash uchun ishlatiladi
  
  // int a;
  //printf("Iltimos, biror butun son kiriting: \n");
  //scanf("%d", &a); // %d - butun son uchun format spetsifikatori, 
  // etibor bering &a - a o'zgaruvchisining manzili
  // va biz uni belgilash uchun & ishlatamiz
  
  // printf("Siz kiritgan son: %d\n", a);

  // MULTIPLE INPUTS
  // int x;
  // char str;
  // printf("Iltimos butun son va matn kiriting: \n");  
  // scanf("%d %c", &x, &str); // bir nechta qiymatlarni kiritish uchun
  // bir necha turdagi qiymatni yozganda C ning o'zi uni turiga qarab mos ravishta ajratib oladi

  // printf("Siz kiritgan son: %d\n", x);
  // printf("Siz kiritgan matn: %c\n\n", str);


  // TAKE STRING INPUT
  // biz scanf() funksiyasi yordamida string qiymatlarni olayotganimizda 
  // faqat bitta so'zni oladi, bo'sh joydan keyin to'xtaydi
  // kiritayotgan so'zimizni necha bitligini oldindan yozib qo'yishimiz kerak 
  // string uchun %s format spetsifikatori ishlatiladi va & ishlatilmaydi
  // char name[30];
  // printf("Iltimos ismingizni kiriting: \n");
  // scanf("%s", name); // string uchun %s format spetsifikatori ishlatiladi
  // printf("Salom: %s\n\n", name);


  // FGETS() 
  // fgets() funksiyasi string qiymatlarni olish uchun ishlatiladi
  // scnaf() funksiyasidan farqli o'laroq, fgets() funksiyasi bo'sh joylarni ham oladi
  char fullname[50];
  printf("Iltimos to'liq ismingizni kiriting: \n");
  fgets(fullname, sizeof(fullname), stdin); // stdin - standart kirish oqimi
  printf("Salom, Tanishganimdan hursandman: %s\n\n", fullname);

  return 0;
}