#include<iostream>
using namespace std;
int main(){
	int s1,s2,s3;
	cin>>s1;
	cin>>s2;
	int arr1[s1];
	int arr2[s2];
	s3=s1+s2;
	int arr3[s3];
	for(int i=0;i<s1;i++){
		cin>>arr1[i];
		arr3[i]=arr1[i];
	}
	int k=s1;
	for(int i=0;i<s2;i++){
		cin>>arr2[i];
		arr3[k]=arr2[i];
		k++;
	}
	
	for(int i=0;i<s3;i++){
		bool a=false;
		for(int j=0;j<s3-i-1;j++){
			if(arr3[j]>arr3[j+1]){
				a=true;
				swap(arr3[j],arr3[j+1]);
			}
		}
		if(!a) break;
	}
	
	for(int i=0;i<s3;i++){
		cout<<arr3[i]<<" ";
	}
	return 0;
}
