#include<iostream>
#include<string>
using namespace std;
class student{
	public:
	int rno;
	string name;
		void get(int x){
			this->rno=x;
		}
		void put(){
			cout<<"rno: "<<rno<<endl;
			cout<<"name: "<<name<<endl;
		}
};
int main(){
	student s1,s2,s3;
	student *p1=&s1;
	student *p2=&s2;
	student *p3=&s3;
	string  student::*p = &student::name;
	s1.*p="rohit";
	p1->get(10);
	p1->put();
	return 0;
}