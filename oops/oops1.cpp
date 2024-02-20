#include<iostream>
using namespace std;

class student{

    string name;

    public:
    int id;
   int age;
   bool gender;

   void setname( string s ){
    name=s;
   }

   void printinfo(){
    cout<<"Your roll no. = ";
    cout<<id<<endl;
    cout<<"Your name = ";
    cout<<name<<endl;
    cout<<"Your age = ";
    cout<<age<<endl;
    cout<<"Your gender = ";
    cout<<gender<<endl;


   }
};

int main() {

    student sectionA[3];

    for(int i=0; i<3; i++){
        cout<<"Hello new user"<<endl;
        cout<<"Welcome to registration form--"<<endl;
        sectionA[i].id= i;
        cout<<"what is your name?"<<endl;
        string s;
        cin>>s;
        sectionA[i].setname(s);
        cout <<"what is your age"<<endl;
        cin>>sectionA[i].age;
        cout<<"what is your gender? male-0/female-1"<<endl;
        cin>>sectionA[i].gender;
        cout<<"your id is "<<i<<endl;
        cout<<"Thank You for Registration ('-')."<<endl;

    }

    int p=1;
    while(p){
        int rollno;
        cout<<"write rollno to know your info"<<endl;
        cin>>rollno;
        sectionA[rollno].printinfo();
        cout<<"continue-1  exit-0"<<endl;
        cin>>p;
    }

    return 0;
}