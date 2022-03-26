#include <stdio.h>
int main()
{
  int n,a[10],i,j,temp,first,last,mid,key;
  printf("enter n: \n");
  scanf("%d",&n);
  printf("enter n elements\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf(" the elements are unsorted\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  for(i=0;i<n-1;i++);
  {
    for(j=0;j<n-i-1;j++);
    {
      if(a[j]<a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  printf("after sorting:\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  printf("enter the element to be searched:");
    scanf("%d",&key);
    first=0;
    last=n-1;
    while(first<=last)
    {
      mid=(first+last)/2;
      if(key==a[mid])
      {
        printf("element %d found at location %d",key,mid+1);
        return 0;
      }
      else if(key<a[mid])
      {
        last=mid-1;
      }
      else
      {
        first=mid+1;
      }
    }
  printf("element %d not found",key);
  return 1;
}
  