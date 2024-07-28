//Задача 4. Какое время года
//Ввести номер месяца и вывести название времени года.
//Данные на входе: Целое число от 1 до 12 - номер месяца.
//Данные на выходе: Время года на английском: winter, spring, summer, autumn
//Пример №1
//Данные на входе: 4
//Данные на выходе: spring
//Пример №2
//Данные на входе: 1
//Данные на выходе: winter

#include <stdio.h>
int main(int argc, char **argv)
{
int a,b,c,d,e;
printf("Введите число месяца\n");
 scanf("%d",&a);
 if (a<=1 | a<3 | a==12) 
  printf("winter\n");
   if (a>2 & a<6 ) 
    printf("spring\n");
     if (a>5 & a<9 ) 
      printf("summer\n");
        if (a>8 & a<12 ) 
          printf("autumn\n");
 if (a<1 | a>12) 
 printf("вне диапазона (1-12)");
 return 0;
}
