#include<iostream>
using namespace std;

class book{
	int *p;
	int *q;
	public:
		void get(int x,int y);
		void put();
};

void book::get(int x,int y){
	p=&x;
	q=&y;
}

void book::put(){
	cout<<*p<<endl;
	cout<<*q;
}

int main(){
	book b;
	b.get(400,2010);
	b.put();
	return 0;
}