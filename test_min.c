#include <stdio.h>
#include <assert.h>



int min(int arr[],int count)
{
  int minn=arr[0];
  for(int i=1;i<count;i++)
  {
    if(arr[i] < minn)
    {
      minn = arr[i];
    }
  }
  return minn;
}
