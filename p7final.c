#include<stdio.h>
typedef struct triangle
{
float base,altitude,area;
}Triangle;
Triangle input_triangle()
{
  Triangle t;
  printf("enter base and altitude of the triangle\n");
  scanf("%f%f",&t.base,&t.altitude);
  return t;
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void output(Triangle t)
{
  printf("the area of the triangle is %f",t.area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}