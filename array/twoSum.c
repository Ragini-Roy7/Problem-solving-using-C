#include <stdio.h>
// find two ele in arr whose sum equals target val
int main()
{

  int n;
  int targ_sum = 19;
  printf("enter no. of ele\n");
  scanf("%d", &n);

  // input elements
  int arr[n];
  printf("enter ele\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("you have entered ele:\n");
  for (int i = 0; i < n; i++)
  {
    if (i == n - 1)
    {
      printf("%d", arr[i]);
    }
    else
    {
      printf("%d , ", arr[i]);
    }
  }

  //two sum logic
  int sum = 0;
  int i;
  for (int i = 0; i < n-1; i++)
  { 
    
    sum = arr[i] + arr[i + 1];
  }
    if (sum == targ_sum)
    {
      printf("%d + %d equals to %d target sum\n", arr[i], arr[i + 1], targ_sum);
    }
  }

