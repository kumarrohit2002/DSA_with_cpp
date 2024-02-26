#include<iostream>
using namespace std;
int main(){
	int arr[]={10,20,30,40,50};
	int k=30,n=5;
	int i,j;
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	
	j=k;
	while(j<n){
		arr[j-1]=arr[j];
		j=j+1;
	}
	
	n=n-1;
	cout<<endl<<"Element of array after deletion:"<<endl;
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}