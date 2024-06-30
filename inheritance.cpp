// This is single inheritance

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class A
// {

// public:
//     void func(){
//         cout<<"inherited";
//     }

// };
// class B : public A{

// };
// int main(){
//     B b;
//     b.func();
//     return 0;
// }


// This is Multiple inheritance

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class A{
//     public:
//         void Afunc(){
//             cout<<"Inherited Func A"<<endl;
//         }
// };
// class B{
//     public:
//         void Bfunc(){
//             cout<<"Inherited Func B"<<endl;
//         }
// };
// class C:public A,public B{
//     public:
// };

// int main(){
//     C c;
//     c.Afunc();    
//     c.Bfunc();
//     return 0;
// }

// This is multilevel inheritance

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class A{
//     public:
//         void Afunc(){
//             cout<<"Inherited func A"<<endl;
//         }
// };

// class B: public A{
//     public:
//         void Bfunc(){
//             cout<<"Inherited func B"<<endl;
//         }
// };
// class C:public B{
//     public:
//         void Cfunc(){
//             cout<<"Inherited func C"<<endl;
//         }
// };
// int main(){
//       C c;
//       B b;
//       c.Afunc();
//       c.Bfunc();
//       c.Cfunc();

//     //   b.Afunc();
//     //   b.Bfunc();
//     //   c.Cfunc();
//     return 0;
// }

// This is hybrid inheritance

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        void Afunc(){
            cout<<"Inherited func A"<<endl;
        }
};
class B:public A{
    public:
        void Bfunc(){
            cout<<"Inherited func B"<<endl;
        }
};
class C{
    public:
        void Cfunc(){
            cout<<"Inherited func C"<<endl;
        }
};
class D:public B,public C{
    public:
        void Dfunc(){
            cout<<"Inherited func D"<<endl;
        }
};
int main(){
    B b;
    D d;
    cout<<"\nInheritance with B"<<endl;
    b.Afunc();
    b.Bfunc();

    cout<<"\nInheritance with D"<<endl;
    d.Afunc();
    d.Bfunc();
    d.Cfunc();
    d.Dfunc();
    return 0;
}