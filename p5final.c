#include<stdio.h>
int input()
{
  int a;
  scanf("%d",&a);
  return a;
}
int gcd(int a,int b)
{
  int t,i,gcd=1;
  if(a>b)
  {
    t=a;
    a=b;
    b=t;
  }
  if(b%a==0)
  return a;
  for(i=2;i<a/2;i++)
  {
  if(a%i==0&&b%i==0)
  gcd=i;
  }
  return gcd;
}
void output(int a,int b,int gcd)
{
  printf("the gcd of %d and %d is %d",a,b,gcd);
}
int main()
{
  int a,b,hcf;
  printf("enter any two numbers\n");
  a=input();
  b=input();
  hcf=gcd(a,b);
  output(a,b,hcf);
  return 0;
}
