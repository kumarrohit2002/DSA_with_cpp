#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v(6);
	for(int i=0;i<6;i++){
		cin>>v[i];
	}
	int c=0;
	for(int i=0;i<6;i++){
		if(v[i]<v[i+1]);
		else c=c+1;
	}
	if(c==0) cout<<"vector is sorted";
	else cout<<"vector is not sorted";
	return 0;
}
