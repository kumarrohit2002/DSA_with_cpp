#include<iostream>
#include<math.h>
using namespace std;
int square(int r){
	return r*r;
}
double circumference(int r){
	return 3.1514*square(r);
}
double area(int r){
	return 2*3.1415*r;
}
int main(){
	int r;
	cout<<"Enter the radius r: ";
	cin>>r;
	cout<<"Area of circul is: "<<area(r);
	cout<<"\ncircumference of circul is: "<<circumference(r);
	return 0;
}
