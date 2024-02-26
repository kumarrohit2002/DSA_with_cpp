#include<iostream>
using namespace std;

class acadmic{
    protected:
    int m[5];
    public:
    void get(){
        for(int i=0;i<5;i++){
            cin>>m[i];
        }
    }
};

class sport{
    protected:
    int sport_m;
    public:
    void get_sport(){
        cin>>sport_m;
    }
};

class result:public acadmic,public sport{
    public:
    void avarge(){
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+m[i];
    }
    sum=sum+sport_m;
        cout<<sum/6;
    }
};


int main(){
    result s;
    s.get();
    s.get_sport();
    s.avarge();
    return 0;
}