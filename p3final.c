#include<stdio.h>
int input_number()
{
  int n;
  printf("enter the number having more factors\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i;
  for(i=2;i<=n/2;i++)
    {
    if(n%i==0)
       return 1;
    }
  return 0;
}
void output(int n,int composite)
{
  if(composite==1)
    printf("the number is a composite\n");
  else
    printf("the number is not a composite number\n");
}
int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0; 
}
