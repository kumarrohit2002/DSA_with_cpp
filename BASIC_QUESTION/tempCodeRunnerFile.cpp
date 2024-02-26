#include<iostream>
#include<vector>
using namespace std;
void countsort(vector<int> &v,int n){
	int max_ele=INT_MIN;
	for(int i=0;i<n;i++){
		if(max_ele<v[i]) max_ele=v[i];
	}
	//create freq arr
	vector<int> freq(max_ele+1,0);
	for(int i=0;i<n;i++){
		freq[v[i]]++;
	}
    //	calculate cumulative arr
	for(int i=0;i<=max_ele;i++){
		freq[i]+=freq[i-1];
	}
//	calculate the stored array
	vector<int> ans(n);
	for(int i=n-1;i>=0;i--){
		ans[--freq[v[i]]]=v[i];
	}
//	copy back the ans to ori
	for(int i=0;i<n;i++){
		v[i]=ans[i];
	}
}
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	countsort(v,n);
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}