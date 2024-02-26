#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ofstream f;
	f.open("fff.txt",ios::app);
	f<<" rohit kumar "<<endl\;
	f.close();
	ifstream m;
	m.open("fff.txt");
	string ch;
	while(getline(m,ch)){
	cout<<ch;
}
	m.close();
	return 0;
}
