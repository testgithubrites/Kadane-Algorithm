//kadane algorithm
#include<iostream>
using namespace std;
int maxsumarray(int a[],int n)
{
   int maxsum=0;
   int cursum=0;
   for(int i=0;i<n;i++)
   {
     cursum=cursum+a[i];
   }
   if(cursum>maxsum)
      maxsum=cursum;
    if(cursum<0)
      cursum=0;
  return maxsum;
}
int main()
{
   int a[]={10,20,-30,40,50};
   int maxnum=maxsumarray(a,5);
   cout<<maxnum;
   return 0;
}
