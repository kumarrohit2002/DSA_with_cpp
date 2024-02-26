#include<iostream>
using namespace std;
int firstoccurrence(int arr[], int f, int l, int target) {
    while (f <= l) {
        int mid = (f + l) / 2;
        if (arr[mid] == target) {
            while (mid > 0 && arr[mid - 1] == target) {
                mid--; // Move to the leftmost occurrence of the target.
            }
            return mid;
        } else if (arr[mid] > target) {
            l = mid - 1; // Update the 'l' variable to search the left half.
        } else {
            f = mid + 1; // Update the 'f' variable to search the right half.
        }
    }
    return -1; // Return -1 if the target is not found in the array.
}

int main(){
    int arr[10]={2,4,5,5,6,6,9,9,9,9};
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    int index=firstoccurrence(arr,0,9,target);
    cout<<index;
    return 0;
}