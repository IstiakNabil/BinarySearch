#include<stdio.h>
int getValue (int arr[],int right, int left, int target)
{
    if (left>right)
    {
        return 0;
    }

    int mid = left+ (right-left)/2;
    

if (arr[mid] == target)
{
    return 1;
}
    if (arr[mid]>target){
      return getValue(arr, mid-1, left, target );
    }
       else if (arr[mid]<target)
{
  return  getValue(arr, right, mid+1, target);
}


}
int main()
{
    int arr [] = {20, 30, 40 ,50, 90, 100};
    int size = sizeof(arr)/sizeof(arr[0]);
   int target = 30;
 int   left =0;
  int  right=size-1;
   int result = getValue(arr, right, left, target);
   if (result ==1)
   printf("YES");
}