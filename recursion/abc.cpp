// You are using GCC
#include<iostream>
using namespace std;
int sort(int arr[],int temp[],int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=0;j<n;j++){
            if(arr[j]<min){
                min=j;
            }
        }
        if(i!=min){
            swap(arr[i],arr[min]);
            swap(temp[i],temp[min]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ans[100];
    int k=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans[i]=arr[i];
        k++;
    }
    int m;
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
        ans[k]=arr1[i];
        k++;
    }

    for(int i=0;i<k;i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    int v[k];
    for(int i=0;i<k;i++)
    {
        int cnt=0;
        for(int j=i+1;j<k;j++)
        {
            if(ans[i]==ans[j])
            {
                cnt++;
                
            }
        }
        v[i]=cnt;
    }

    for(int i=0;i<k;i++)
    {
        cout<<v[i]<<" ";
    }
    
    // // sort(arr,temp,k);
    // for(int i=0;i<k;i++){
    //     cout<<ans[i]<<" ";
    // }
    
    return 0;
}