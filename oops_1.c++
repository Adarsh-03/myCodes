// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

class hero{

private:
    int health;
public:
    char level;

    hero(){
        cout<<"constructor is called"<<endl;
    }

void print(){
    cout<<level<<endl;
}

int gethealth(){
    return health;
}

int getlevel(){
    return level;
}

int sethealth(int h){
    health = h;
}

int setlevel(char ch){
    level = ch;
}
};


// int main(){

//     // object created statically
//     cout<<"HI"<<endl;
//     hero ramesh;
//     cout<<"BYE"<<endl;
//     // object created dynamically
//     hero *b = new hero;

//     return 0;
// }
// 2nd topic

int main(){

    // object created statically
    hero a;
    a.sethealth(80);
    a.setlevel('A');

    cout<<"health is "<<a.gethealth()<<endl;
    cout<<"level is "<<a.level<<endl;   


    // object created dynamically

    hero *b = new hero;
    (*b).sethealth(70);
    (*b).setlevel('B');

    cout<<"health is "<<(*b).gethealth()<<endl;
    cout<<"level is "<<(*b).level<<endl; 

    hero *c = new hero;
    c->sethealth(60);
    c->setlevel('C');
    
    cout<<"health is "<<c->gethealth()<<endl;
    cout<<"level is "<<c->level<<endl; 
    return 0;
}

// 1st topic

// int main(){
//     // creation of object
//     hero ramesh;
//     cout<<"health iss "<<ramesh.gethealth()<<endl;
//     // use setter 
//     ramesh.sethealth(70);
//     ramesh.level = 'A';

//     cout<<"health iss "<<ramesh.gethealth()<<endl;
//     cout<<"level iss "<<ramesh.level<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     char c = 'B';
//     cout << "The ASCII value of " << c << " is " << int(c);
//     return 0;
// }