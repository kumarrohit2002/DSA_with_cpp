#include<iostream>
#include<vector>
using namespace std;
void countsort(vector<int> &v,int pos){
	int n=v.size();
//	create freq array
	vector<int> freq(10,0);
	for(int i=0;i<n;i++){
		freq[(v[i]/pos)%10]++;
	}
//	camulate array
	for(int i=1;i<10;i++){
		freq[i]+=freq[i-1];
	}
//	ans array
	vector<int> ans(n);
	for(int i=n-1;i>=0;i--){
		ans[--freq[(v[i]/pos)%10]]=v[i];
	}
//	copy orgi
	for(int i=0;i<n;i++){
		v[i]=ans[i];
	}
}

void radixsort(vector<int> &v){
	int n=v.size();
	int max_ele=INT32_MIN;
	for(int i=0;i<n;i++){
		if(max_ele<v[i]) max_ele=v[i];
	}
	for(int pos=1;max_ele/pos>0;pos*=10){
		countsort(v,pos);
	}
}
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    radixsort(v);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
