#include<iostream>
using namespace std;
int main(){
	int m;
    cout << "Enter the number of rows in the array: ";
    cin >> m;
    int n;
    cout << "Enter the number of columns in the array: ";
    cin >> n;
    int arr[100][100];  // Assuming maximum size of 100x100
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int tne=m*n;
	int minr=0;
	int maxr=m-1;
	int minc=0;
	int maxc=n-1;
	int c=0;
	while(c<tne){
		//print minimum row
		for(int j=minc;j<=maxc;j++){
			cout<<arr[minr][j]<<" ";
			c++;
		}
		minr++;
		if(c>=tne) break;
		//print maximum column
		for(int i=minr;i<=maxr;i++){
			cout<<arr[i][maxc]<<" ";
			c++;
		}
		maxc--;
		if(c>=tne) break;
		//print maximum row
		for(int j=maxc;j>=minc;j--){
			cout<<arr[maxr][j]<<" ";
			c++;
		}
		maxr--;
		if(c>=tne) break;
		//print minimum column
		for(int i=maxr;i>=minr;i--){
			cout<<arr[i][minc]<<" ";
			c++;
		}
		minc++;
		if(c>=tne) break;
	}
	return 0;
}
