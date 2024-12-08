
#include <stdio.h>
#include<math.h>
int main() 
{
  int a,b,c,d;
  float r1,r2;
  printf("Enter the values of a,b,c:");
  scanf("%d%d%d",&a,&b,&c);
  d=(b*b)-(4*a*c);
  if(d>0)
  {
      r1=(-b+sqrt(d))/2*a;
      r2=(-b-sqrt(d))/2*a;
      printf("Real and distnct");
      printf("root1=%f,root2=%f",&r1,&r2);
  }
  else if(d==0)
  {
      r1=r2=-b/2*a;
      printf("Real and eqaul");
      printf("root1=root2=%f",&r1);
  }
  else
  {
      printf("Real and imaginary");
  }
  return 0;
}
