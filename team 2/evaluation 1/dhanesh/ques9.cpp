#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    for (int i = 0; i < n; ++i)
    {
         for (int j = i+1; j <n; ++j)
         {
              if(arr[i]+arr[j]==m)
              {
                if(arr[i]<arr[j])
                 cout<<arr[i]<<" and "<<arr[j]<<endl;
                else cout<<arr[j]<<" and "<<arr[i]<<endl;
              }
         }
    }
    return 0;
}