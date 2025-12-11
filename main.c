#include <stdio.h>

int main(){
  // FILES
  // C da biz fayl yaratishimiz ochishimiz o'qishimiz va yozishimiz mumkin
  
  FILE *fptr; // Bu yerda FILE malumot turi va biz u bilan ishlash uchun fptr pointerini yaratdik
  // hozircha bu muhum emas faqat ishlashimiz uchun kerak
  
  // fopen funksiyasi 2 ta parametr oladi
  // 1. fayl nomi (manzil bilan birga bo'lishi mumkin)
  // 2. rejim (w - yaratish va yozish , a - qo'shish, r - o'qish)

  // WRITE TO A FILE

  fptr = fopen("example.txt", "w"); // fayl yaratish va yozish rejimida ochish

  // biz w modi bilan faylni ochdik endi unga yozishimiz mumkin
  fprintf(fptr, "Salom Dunyo!\n"); // faylga yozish
  fprintf(fptr, "Bu C dasturlash tilida fayl bilan ishlash misolidir.\n");
  
  // Shu yerda etibor berishimiz kerak bolgan narsa shuki,
  // biz hozir faylga yangi text yozdik va yana w rejimida yangitdan fprintf chaqirsak,
  // eski yozilgan text ustiga yangi text yoziladi va eski text o'chib ketadi.
  

  // !!! fayl bilan ishlab bo'lgandan keyin biz uni yopishimiz kerak
  fclose(fptr); // faylni yopish

  // APPEND CONTENT TO A FILE

  // agar biz faylga yangi text qo'shmoqchi bo'lsak,
  // biz faylni a (append) rejimida ochishimiz kerak

  fptr = fopen("example.txt", "a"); // faylni qo'shish rejimida ochish
  fprintf(fptr, "Bu yangi qo'shilgan textdir.\n"); // faylga yangi text qo'shish
  // !!! lekin etibor berish kerak yuqoridagi biz faylni yopdik keyin uni a modida ochdik
  // !!! agar biz faylni yopmasdan to'g'ridan to'g'ri a rejimida ochsak,
  // !!! ba'zi tizimlarda bu noto'g'ri natija berishi mumkin

  fclose(fptr); // faylni yopish


  // READ FROM A FILE

  fptr = fopen("example.txt", "r"); // faylni o'qish rejimida ochish
  // endi biz fayldan o'qishimiz uchun string o'zgaruvchini yaratamiz
  char buffer[512]; // 512 belgidan iborat buffer yaratish
  // fgets funksyasi bilan biz faylni o'qiy olamiz
  
  fgets(buffer, sizeof(buffer), fptr); // fayldan o'qish
  // fgets(parametr1, parametr2, parametr3);
  // parametr1 - fayldagi textni saqlash uchun biz yaratgan o'zgaruvchi 
  // parametr2 - biz yaratgan o'zgaruvchining hajmi bitlarda
  // parametr3 - fayl pointeri. fayl.

  printf("%s", buffer); // o'qilgan textni ekranga chiqarish
  // yuqoridagi kod faqat birinchi qatorni o'qiydi
  // agar faylda bir nechta qator bo'lsa, biz loop ishlatib hamma qatorlarni o'qishimiz mumkin
  while(fgets(buffer, sizeof(buffer), fptr)){
    printf("%s", buffer); // har bir o'qilgan qatorni ekranga chiqarish
  }

  // ESLATMA: agar biz mavjud bo'lmagan faylni o'qishga harakat qilsak,
  // fopen funksiyasi NULL qiymat qaytaradi


  if (fptr == NULL)
  {
    printf("Faylni ochishda xatolik yuz berdi!\nBunday fayl mavjud emas.\n");
    return 1; // dasturdan chiqish
  }  
  
  fclose(fptr); // faylni yopish









  printf("\n--- END OF FILE OPERATIONS EXAMPLE ---\n\n");
  // EXAMPLE

  // FAYLNI YARATADI
  fptr = fopen("filename.txt", "w");
  fclose(fptr);
  
  
  // FAYLGA TEXT YOZADI
  fptr = fopen("filename.txt", "a");
  fprintf(fptr, "Faylga birinchi qator yozildi.\n");
  fprintf(fptr, "Faylga ikkinchi qator yozildi.\n");
  fclose(fptr);


  // Faylni o'qish uchun ochadi
  fptr = fopen("filename.txt", "r");

  // FILEDAN MALUMOTNI O'QISH UCHUN STRING YARATAMIZ
  char myString[100];

  // Fayl mavjud bo'lsa
  if(fptr != NULL) {

    // textni o'qiydi va ekranga chiqaradi
    while(fgets(myString, 100, fptr)) {
      printf("%s", myString);
    }

  //Fayl mavjud bo'lmasa
  } else {
    printf("Not able to open the file.");
  }
  return 0;
}