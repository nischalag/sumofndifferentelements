#include<stdio.h>
void inputarray();
void sumarray(int n, int a[20]);
void outputarray(int sum);
void inputarray()
{
  int n, a[20];
  printf("Enter the number of elements:");
  scanf("%d",&n);
  printf("Enter %d elements:\n",n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  sumarray(n,a);
}
void sumarray(int n, int a[20])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  outputarray(sum);
}
void outputarray(int sum)
{
  printf("Sum=%d",sum);
}
int main()
{
  inputarray();
  return 0;
}
