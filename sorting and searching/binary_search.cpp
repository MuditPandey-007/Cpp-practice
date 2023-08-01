#include <iostream>
using namespace std;
void  binarysearch(int ar[],int n,int key)
{
    int s = 0,e =n-1,ans=0;
    int mid = (s + e)/2;
    while(s<=e)
    {
        if (key == ar[mid])
        {
           ans=mid;
           break;
        }
        else if(key<ar[mid])
        {
            e  = mid-1;
        }
        else if(key>ar[mid])
        {
            s = mid+1;
        }
        mid = s + (s-e)/2 ;
        
    }
    cout<<ans;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int key;
    cin>>key;
    binarysearch(ar,n,key);
}