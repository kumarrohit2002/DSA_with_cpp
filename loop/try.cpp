#include<iostream>
#include<string>
using namespace std;

class lpu{
	public:
		char name[20];
		char course[20];
		static int registation_no;
		void get(int i);
		void put(int i);
};

void get(int i){
	cin>>s[i].name>>s[i].course;
}

void put(int i){
	cout<<"student name: "<<s[i].name<<endl;
	cout<<"student course: "<<s[i].course<<endl;
	cout<<"student reg no.: "<<s[i].registation<<endl;
}


int main(){
	class lpu s[2];
	for(int i=0;i<=2;i++){
		s[i].get(i);
		s[i].registation_no=i;
	}
	for(int i=0;i<=2;i++){
		s[i].put(i);
	}
	
	return 0;
}