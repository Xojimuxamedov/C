#include <stdio.h>

int main(int argc, char const *argv[])
{
  
  // ARRAYS
  // arraylar bitta o'zgaruvchida bir necha variablelarni saqlash uchun ishlatiladi 

  int myNumbers[] = {15, 20, 68, 74};
  // hozir 4 ta o'zgaruvchisi bor array yasadik
  
  // variablelarni chiqarish uchun index dan foydalanamiz
  // index 0 dan boshlanib tartibli tarzda davom etadi 0 1 2 3 ...

  printf("index 0 dagi variable %d\n", myNumbers[0]);

  // value sini o'zgartirish uchun ham indexdan foydalanib keyin o'zgartiramiz
  myNumbers[1] = 65; // index 1 da 20 edi endi 65 boldi 
  printf("index 1 dagi variable %d\n", myNumbers[1]);

  // ARRAY yaratishning yana boshqa yo'li avval array uzunligini belgilash va keyin variablelar kiritish
  printf("\n");
  int secondArray[5]; // 4 uzunlikdagi array 

  secondArray[0] = 10; // 0 inchi indexda turgan variablening valuesi 10
  secondArray[1] = 20; // 1 inchi indexda turgan variablening valuesi 20
  secondArray[2] = 30; // 2 inchi indexda turgan variablening valuesi 30
  secondArray[3] = 40; // 3 inchi indexda turgan variablening valuesi 40
  secondArray[4] = 50; // 4 inchi indexda turgan variablening valuesi 50
  for (int i = 0; i < 5; i++)
  {
    printf("%d soni arrayning %d inchi elementi da joylashgan\n", secondArray[i], i);
  }
  
  // !!! ESLAB QOLAMIZ ARRAY YARATAYOTGANDA VALUELAR BITTA TURDA BO'LISHI KERAK


  // Array Size
  // arrayni hajmini o'lchayotganda biz * sizeof * operatoridan foydalanamiz

  printf("\n%zu\n", sizeof(secondArray));
  // bu bizga 20 tini qaytaradi 
  // chunki bitta int turidagi malumot 4 bit hajmdagi joyni egallaydi 
  // 4 * 5 = 20


  // GET THE NUMBER OF ELEMENTS
  // arraydagi o'zgaruvchilar sonini aniqlash uchun biz quyidagi formuladan foydlanamiz

  int length = sizeof(secondArray) / sizeof(secondArray[0]);
  printf("arrayimizdagi elementlar soni %d ta\n\n", length);

  //sizeof(secondArray) / sizeof(secondArray[0]) bu formula har doim ishlaydi


  // MULTIDIMENSIONAL ARRAYS
  // biz arrayni 2D 3D yoki undan kop korinishlarda yasashimiz ham mumkin 
  // uning uchun biz arrayning ichida yana array tasaymiz

  int twoD[3][4] = {{1, 5, 7, 8}, {12, 14, 15, 19}, {7, 2 , 6 ,1}};
  // biz hozir 2d korinishida array yasadik ekranda chiqarish uchun quyidagiday qilamiz

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d\t", twoD[i][j]);
    }
    printf("\n");    
  }
    printf("\n");    
  
  // variablesini o'zgartirish ham huddi oddiy arrayniki bilan bir hil 
  printf("avval ikkinchi arrayning uchunchi elementi: %d\n", twoD[1][2]);
  twoD[1][2] = 100;
  printf("hozir ikkinchi arrayning uchunchi elementi: %d\n", twoD[1][2]);

  // 3D array yasash ham huddi shunday 
  int example[2][4][3]; // va hokazo

  return 0;
}
