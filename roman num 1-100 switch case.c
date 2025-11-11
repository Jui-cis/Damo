#include<stdio.h>
int main()
{
 int num,twos,ones;
 printf("Enter a number(1-100):");
 scanf("%d",&num);
 twos=num/10;
 ones=num%10;
 switch(num)
 {
  case 1: printf("I"); break;
  case 2: printf("II"); break;
  case 3: printf("III"); break;
  case 4: printf("IV"); break;
  case 5: printf("V"); break;
  case 6: printf("VI"); break;
  case 7: printf("VII"); break;
  case 8: printf("VIII"); break;
  case 9: printf("IX"); break;
  case 10: printf("X"); break;
  case 11: printf("XI"); break;
  case 12: printf("XII"); break;
  case 13: printf("XIII"); break;
  case 14: printf("XIV"); break;
  case 15: printf("XV"); break;
  case 16: printf("XVI"); break;
  case 17: printf("XVII"); break;
  case 18: printf("XVIII"); break;
  case 19: printf("XIX"); break;
  case 100: printf("C"); break;
  default:
    switch(twos)
     {
      case 1:printf("X"); break;
      case 2:printf("XX"); break;
      case 3:printf("XXX"); break;
      case 4:printf("XL"); break;
      case 5:printf("L"); break;
      case 6:printf("LX"); break;
      case 7:printf("LXX"); break;
      case 8:printf("LXXX"); break;
      case 9:printf("XC"); break;
     }
    switch(ones)
    {
     case 1: printf("I"); break;
     case 2: printf("II"); break;
     case 3: printf("III"); break;
     case 4: printf("IV"); break;
     case 5: printf("V"); break;
     case 6: printf("VI"); break;
     case 7: printf("VII"); break;
     case 8: printf("VIII"); break;
     case 9: printf("IX"); break;
    }
   }
   return 0;
}
