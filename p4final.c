#include<stdio.h>
int is_composite(int num);
int input_array_size()
{
  int n;
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i;
  printf("enter the numbers\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
}
int is_composite(int num)
{
  int i;
  for(i=2;i<=num/2;i++)
  {
    if(num%i==0)
    return 1;
  }
  return 0;
}
int sum_composite_numbers(int n,int a[n])
{
  int i,sum=0;
  for(i=0;i<n;i++)
  {
    if(is_composite(a[i]))
    sum=sum+a[i];
  } 
  return sum;
}
void out_put(int sum)
{
  printf("the sum of the composite numbers is %d",sum);
}
int main()
{
  int n,sum=0;
  printf("enter the size of the array\n");
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  out_put(sum);
  return 0;
}