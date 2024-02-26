#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int val;
	cin>>val;
	int f=1;
	int index=-1;
	for(int i=0;i<n;i++){
		if(arr[i]==val){
			f=0;
			index=i;
			break;
		}
	}
	if(!f){
		cout<<"Element "<<val<<" is present at index "<<index;
	}
	else{
		cout<<"Element "<<val<<" is not present";
	}
	return 0;
}
