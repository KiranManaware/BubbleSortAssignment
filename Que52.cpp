#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,2,8,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
    }
    if(flag==true) cout<<"It is nearly sorted";
    else cout<<"It is not nearly sorted";
  
    return 0;
}