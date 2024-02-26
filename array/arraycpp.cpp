#include<iostream>
using namespace std;
int main(){
	int array[4]={1,5,3,4};
	int size=sizeof(array)/sizeof(array[0]);
//	for(int idx=0;idx<size;idx++){
//		cout<<array[idx]<<endl;
//	}
//	for each loop
	for(int ele : array){
		cout<<ele<<endl;
	}
	return 0;
}
