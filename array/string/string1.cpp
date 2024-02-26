#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main(){
	string s1="rohit ";
	string s2="kumar";
	cout<<s1+s2;
	char ch1[10]="rohit ";
	char ch2[10]="kumar";
	strcat(ch1,ch2);             // this works in string.h..............
	cout<<endl<<ch1<<endl;
	
	string str="hell";
	char ch='o';
	str.push_back(ch);
	cout<<str<<endl;
	cout<<str.size()<<endl;
	
	int num=1000;
	string nums=to_string(num);
	cout<<nums<<endl;           //this work in vs code............
	
	return 0;
}