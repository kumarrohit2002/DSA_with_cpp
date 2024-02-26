#include<iostream>
using namespace std;
int main(){
	int am;                       
	int an;
	cout<<"Enter the row: ";
	cin>>am;
	cout<<"Enter the column: ";
	cin>>an;
	
	int bm;
	int bn;
	cout<<"Enter the row: ";
	cin>>bm;
	cout<<"Enter the column: ";
	cin>>bn;
	
	int arr[am][an];
	cout<<"Enter the first array: "<<endl;
	for(int i=0;i<am;i++){
		for(int j=0;j<an;j++){
			cin>>arr[i][j];
		}
	}
	
	int brr[bm][bn];
	cout<<"Enter the second array: "<<endl;
	for(int i=0;i<bm;i++){
		for(int j=0;j<bn;j++){
			cin>>brr[i][j];
		}
	}
	int ans[am][bn];
	for(int i=0;i<an;i++){
		for(int j=0;j<bm;j++){
			int value=0;
			for(int k=0;k<bn;k++){
				value+=arr[i][k]*brr[k][j];
			}
			ans[i][j]=value;
		}
	}
	cout<<"ans: "<<endl;
	for(int i=0;i<am;i++){
		for(int j=0;j<bn;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
