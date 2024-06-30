// this is example of function overloading

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class A{
//     public:
//         void fun(){
//             cout<<"Inherited function with no argument"<<endl;
//         }

//         void fun(int x){
//             cout<<"Inherited function with int argument"<<endl;
//         }
//         void fun(double x){
//             cout<<"Inherited function with double argument"<<endl;
//         }
// };

// int main(){
//     A n;
//     n.fun();
//     n.fun(3);
//     n.fun(4);
//     return 0;
// }


// this is example of operator overloading

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A{
    private:
        int real,img;
    public:
        A(int r=0,int i=0){
            real=r;
            img = i;
        }
        A operator+ (A const &obj){
            A res;
            res.img = img + obj.img;
            res.real = real + obj.real;
            return res;
        }

        void display(){
            cout<<real<<" + i"<<img<<endl;
        }
};

int main(){
    A c1(12,7);
    A c2(6,7);
    A c3 = ( c1 + c2);
    c3.display();

    return 0;
}