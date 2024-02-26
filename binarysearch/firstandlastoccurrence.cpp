#include<iostream>
using namespace std;
int firstoccurrence(int arr[],int n,int key){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			e=mid-1;
		}
		else if(key>arr[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
int lastoccurrence(int arr[],int n,int key){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			s=mid+1;
		}
		else if(key>arr[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}

int main(){
	int arr[7]={1,2,3,3,3,5,6};
	int key=3;
	cout<<firstoccurrence(arr,7,key)<<endl;
	cout<<lastoccurrence(arr,7,key);
	return 0;
}