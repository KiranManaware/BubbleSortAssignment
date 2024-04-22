// Sort the array in descending order using Bubble Sort.
#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int n=v.size();
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(v[j]<v[j+1]){
                int temp= v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}