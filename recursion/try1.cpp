#include<iostream>
using namespace std;

void selection_sort(int arr1[],int n){
	for(int i=0;i<n;i++){
		int min_idx=i;
		for(int j=i+1;j<n;j++){
			if(arr1[j]<arr1[min_idx]){
				min_idx=j;
			}
		}
		if(i!=min_idx){
			swap(arr1[i],arr1[min_idx]);
		}
	}
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int arr1[n/2];
	int arr2[n/2];
	int k=0;
	for(int i=0;i<n/2;i++){
		arr1[i]=arr[i];
		k++;
	}
	for(int i=0;i<n/2;i++){
		arr2[i]=arr[k];
		k++;
	}
	selection_sort(arr1,n/2);
//	selection_sort(arr2,n/2);
	for(int i=0;i<n/2;i++){
		cout<<arr1[i]<<" ";
	}
	return 0;
}