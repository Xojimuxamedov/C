#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
  // BREAK / CONTINUE
  // Break ni biz oldin ham switch da korganmiz 
  // break loop daham ishlatiladi 

  for (int i = 0; i < 5; i++)
  {
    if (i == 2)
    {
      break;
    }
    printf("%d  ", i);
  }
  printf("\n");
  printf("\n");
  // bu yerda i 2 ga teng bolganda funksya ishlashdan toxtaydi 

  
  // CONTINUE
  // continue steymenti bir martta funksyani toxtatib braek qilib qolganini davom ettirib ketadi 

  for (int i = 0; i < 5; i++)
  {
    if (i == 2)
    {
      printf("   ");
      continue;
    }
    printf("%d  ", i);
  }
 
  printf("\n");
  return 0;
}
