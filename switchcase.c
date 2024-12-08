#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter the values:");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
      case'+':
        printf("Addition %d",(a+b));
        break;
      case'-':
        printf("Subtraction %d",(a-b));
        break;
      case'*':
        printf("Multiplication %d",(a*b));
        break;
      case'/':
        printf("Division %d",(a/b));
        break;
      case'%':
        printf("Reminder %d",(a%b));
        break;
      default:
         printf("The given operator is not valid");
         break;
    }
}
