// // // // You are using GCC
// // // # include<iostream>
// // // # include<cmath>
// // // using namespace std;
// // // int main(){
// // //     int n, x, k;
// // //     cin>>n;                 // 5
// // //     int arr[n];
// // //     for(int i=0; i<n; i++){   //2 4 6 8 10
// // //         cin>>arr[i];
// // //     }
// // //     cin>>x>>k;                // 5 3
// // //     int diffval[n][2];
 
// // //     for(int i=0; i<n ; i++){
// // //        diffval[i][0]=abs(arr[i]-x);
// // //        diffval[i][1]= arr[i];
// // //     }
// // //     for(int i=0; i<n-1; i++){
// // //         for (int j=0; j<n-i-1; j++){
// // //             if(diffval[j][0]> diffval[j+1][0] || (diffval[j][0]==diffval[j+1][0] && diffval[j][1]< diffval[j+1][1])){
// // //                 swap(diffval[j][0], diffval[j+1][0]);
// // //                 swap(diffval[j][1], diffval[j+1][1]);
// // //             }
// // //         }
// // //     }
// // //     for(int i=0; i<min(k, n); i++){
// // //         cout<<diffval[i][1]<<" ";
// // //     }
// // // }

// // // // // You are using GCC
// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){
// // // //     int s1,s2,n;
// // // //     cin>>s1;
// // // //     int arr1[s1];
// // // //     for(int i=0;i<s1;i++){
// // // //         cin>>arr1[i];
// // // //     }
    
// // // //     cin>>s2;
// // // //     int arr2[s2];
// // // //     n=s1+s2;
// // // //     int arr3[n];
// // // //     for(int i=0;i<s2;i++){
// // // //         cin>>arr2[i];
// // // //         arr3[i]=arr2[i];
// // // //     }
// // // //     int k=s2;
// // // //     for(int i=0;i<s1;i++){
// // // //         arr3[k]=arr1[i];
// // // //         k++;
// // // //     }
    
    
// // // //     for(int i=0;i<n-1;i++){
// // // //         for(int j=0;j<n-1;j++){
// // // //             if(arr3[j]>arr3[j+1]){
// // // //                 swap(arr3[j],arr3[j+1]);
// // // //             }
// // // //         }
// // // //     }
    
// // // //     for(int i=0;i<n;i++){
// // // //         if(arr3[i]==arr3[i+1]) continue;
// // // //         cout<<arr3[i]<<" ";
// // // //     }
    
    
// // // //     return 0;
// // // // }





// // #include <iostream>
// // using namespace std;

// // int findCrossOver(int arr[], int low, int high, int x)
// // {
// //     if (arr[high] <= x)
// //         return high;
// //     if (arr[low] > x)
// //         return low;

// //     int mid = (low + high) / 2;

// //     if (arr[mid] <= x && arr[mid + 1] > x)
// //         return mid;

// //     if (arr[mid] < x)
// //         return findCrossOver(arr, mid + 1, high, x);

// //     return findCrossOver(arr, low, mid - 1, x);
// // }

// // void printKclosest(int arr[], int x, int k, int n)
// // {
// //     int l = findCrossOver(arr, 0, n - 1, x);
// //     int r = l + 1;
// //     int count = 0;

// //     if (arr[l] == x)
// //         l--;

// //     while (l >= 0 && r < n && count < k)
// //     {
// //         if (x - arr[l] < arr[r] - x)
// //             cout << arr[l--] << " ";
// //         else
// //             cout << arr[r++] << " ";
// //         count++;
// //     }

// //     while (count < k && l >= 0)
// //         cout << arr[l--] << " ", count++;

// //     while (count < k && r < n)
// //         cout << arr[r++] << " ", count++;
// // }

// // int main()
// // {
// //     int n;
// //     cin >> n;

// //     int* arr = new int[n];
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> arr[i];
// //     }

// //     int x;
// //     cin >> x;

// //     int k;
// //     cin >> k;

// //     printKclosest(arr, x, k, n);

// //     delete[] arr;

// //     return 0;
// // }




// // You are using GCC
// #include<iostream>
// using namespace std;
// class Navigator{
//     public:
//     enum en{
//         North=1,East=2,West=3,South=4
//     }N;
// };
// int main(){
//     Navigator n;
//     n.N=n.North;
//     // n.enum b=;
//     int choice;
//     cin>>choice;
//     switch(choice){
//         case n.North:{
//             cout<<"We are headed towards North.";
//             break;
//         }
        
//         case n.South:{
//             cout<<"We are headed towards South.";
//             break;
//         }
        
//         case n.East:{
//             cout<<"We are headed towards East.";
//             break;
//         }
//         case n.West:{
//             cout<<"We are headed towards West.";
//             break;
//         }
        
//         default:{
//             cout<<"Invalid Input";
//         }
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void selection_sort(int arr1[],int n){
// 	for(int i=0;i<n;i++){
// 		int min_idx=i;
// 		for(int j=i+1;j<n;j++){
// 			if(arr1[j]<arr1[min_idx]){
// 				min_idx=j;
// 			}
// 		}
// 		if(i!=min_idx){
// 			swap(arr1[i],arr1[min_idx]);
// 		}
// 	}
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int arr1[n/2];
// 	int arr2[n/2];
// 	int eve_idx=0;
//     int odd_idx=0;
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             arr1[eve_idx++]=arr[i];
//         }
//         else{
//             arr2[odd_idx++]=arr[i];
//         }
//     }
// 	selection_sort(arr1,n/2);
// 	selection_sort(arr2,n/2);
// 	eve_idx=0;
//     odd_idx=0;
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             arr[i]=arr1[n/2-1-eve_idx++];
//         }
//         else{
//             arr[i]=arr2[odd_idx++];
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& arr){
	int n = arr.size(), i, j;
	for (i = n - 2; i >= 0; i--) {
		if (arr[i] < arr[i + 1]) {
			break;
		}
	}
	if (i < 0) {
		reverse(arr.begin(), arr.end());
	}
	else {
		for (j = n - 1; j > i; j--) {
			if (arr[j] > arr[i]) {
				break;
			}
		}
		swap(arr[i], arr[j]);
		reverse(arr.begin() + i + 1, arr.end());
	}
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	nextPermutation(arr);
	for (auto i : arr) {
		cout << i << " ";
	}
	return 0;
}
