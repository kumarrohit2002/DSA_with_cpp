// // #include<iostream>
// // #include<math.h>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin>>n;
// //     int o=n;
// //     int c=0;
// //     int a=n;
// //     while(a!=0){
// //         a=a/10;
// //         c++;
// //     }
// //     int temp=0;
// //     while(n!=0){
// //         cout<<pow(n%10,c)<<endl;
// //         temp=temp+pow(n,c);
// //         n=n/10;
// //     }
// //     cout<<temp<<endl;
// //     if(o==temp) cout<<"amronst";
// //     else cout<<"not";
// // }

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int original_n = n; 
//     int c = 0;
//     int a = n;

//     while (a != 0) {
//         a = a / 10;
//         c++;
//     }

//     int temp = 0;

//     while (n != 0) {
//         cout << pow(n % 10, c) << " " << endl;
//         int d = pow(n % 10, c);
//         temp = temp + d;
//         n = n / 10;
//     }
//     cout << temp << endl;
//     if (original_n == temp)
//         cout << "Armstrong";
//     else
//         cout << "Not Armstrong";

//     return 0;
// }


#include<iostream>
using namespace std;

class marks{
	public:
		int s;
		int m;
		marks(int s1,int s2){
			s=s1;
			m=s2;
		}
		marks(marks &a){
            s=a.s;
            m=a.m; 
        }
		void print(){
			cout<<"marks1:"<<s<<endl;
			cout<<"marks2:"<<m<<endl;
		}
};
int main(){
	marks O(45,50);
	O.print();
	marks O1(O);
	O1.print();
	return 0;
}