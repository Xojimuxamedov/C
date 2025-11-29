#include <stdio.h>

int main(int argc, char const *argv[])
{
  //STRING
  // boshqa tillarga o'xshab C da stringni oddiy yol bilan yarata olmaymiz
  // C da string yasash uchun biz array dan foydalanamiz
  // va barcha arrayning metodlari array bilan ishlashning barcha yollari bunda ham ishlaydi
  // string char turida boladi chunki u char larning yig'indisidan tashkil topadi

  char string[] = "Hello world!";
  // biz hardoim string yozish uchun "" qo'shtirnoqdan foyalanishimiz kerak

  // print qilayotganda %s dan foydalanamiz

  printf("%s\n", string);

  // agar biz stringdan bitta harfini olmoqchi bolsak u char bo'ladi
  // uni print qilish uchun biz %c dan foydalanishimiz kerak boladi

  printf("%c\n", string[0]); // 0 inchi index 1 inchi harf!

  // undagi bitta harfni o'zgartirish uchun biz osha harfni indexidagi harfga yangi harf tayinlaymiz
  // o'zgartirayotganimizda yangi harfni '' birtirnoq orasida belgilashimiz kerak 
  string[0] = 'G';
  printf("%s\n\n", string); 
  
  // string daham for loop ishlaydi

  for (int i = 0; i < sizeof(string)/sizeof(string[0]); i++)
  {
    printf("%c ",string[i]);
  }
  printf("\n\n");

  // stringni yasashni yana bitta usuli uni har birini alohida array elementlari qilib ko'rsatish
  // ohirida \0 qo'yishimiz kerak bu null degani
  // bu string tugaganini bildiradi
  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

  // SPECIAL CHARACTERS
  // bizda stringni buzib qo'yadigan belgilar ham boladi 
  // ularni tuzatish uchun \ backslash ni ishlatamiz 
  
  // \' 
  // \"
  // \\

  printf("SPECIAL \" \' \\  CHARACTERS\n\n");

  // STRING FUNCTIONS
  // C da stringning funksyalaridan foydalanish uchun string.h kutubhonasidan foydalanamiz
  #include <string.h>

  // strlen 
  // biz buni stringda nechta char borligini bilish uchun ishlatamiz
  printf("%zu\n", strlen(greetings)); //12
  printf("%zu\n", sizeof(greetings)); //13
  printf("\n");

  // etibor bergan bolsangiz strlen funksyasi bitta kamroq deb korsatayapti
  // buning sababi u faqat string ga tegishli bolgan charlarni sanaydi \0 dan tashqari
  // sizeof funksyasi esa stringning necha bitdan iboratligini ko'rsatadi 
  
  char testStr[50] = "Salom dunyo";
  printf("%zu\n", strlen(testStr)); //11
  printf("%zu\n", sizeof(testStr)); //50
  printf("\n");

  // CONCATENATE STRINGS
  // strcat bizga ikkita stringni ulashni imkonini beradi 
  // birinchi berilgan argumentga keyingisi qo'shilib birinchisiga tenglashadi 
  // ulanganda uning bit uzunligi ham tenglashadi  
  char str1[20] = "Birinchi ";
  char str2[] = "Ikkinchi!";
  
  strcat(str1,str2);
  printf("%s\n\n", str1);


  // COPY STRINGS
  // strcpy bu birinchi stringni ikkinchisiga bitlarigacha nusxalaydi 
  char str3[20] = "Copy";
  char str4[] = "";
  
  strcpy(str4, str3);
  printf("%s \n",str4);
  printf("\n\n");


  // COMPARE STRINGS
  // strcmp stringlarni solishtirish uchun 
  // bunda ikkita string bir hil bolsa 0 qaytaradi teng bolmasa 0 dan boshqa son
  char str5[] = "Copy";
  char str6[] = "Copy";
  char str7[] = "C";

  printf("%d\n", strcmp(str5, str6));
  printf("%d\n", strcmp(str6, str7));

  return 0;
}
