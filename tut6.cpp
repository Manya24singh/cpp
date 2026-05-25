
//system header file
#include<iostream>

//user header file
#include "this.h" // we have to make a new file name this.h otherwise will show error
using namespace std;

int main() {
   // cout<<"this is hello world program"; (header file programm)

   int a=4, b=5
   cout<< "operators in c++:"<<endl;
   cout<< "following are the types of operators in c++"<<endl;
   //Arithemetic operators
   cout<<"the value of a+b is "<<a+b<<endl;
   cout<<"the value of a-b is "<<a-b<<endl;
   cout<<"the value of a*b is "<<a*b<<endl;
   cout<<"the value of a/b is "<<a/b<<endl;
   cout<<"the value of a%b is "<<a%b<<endl;
   cout<<"the value of a++ is "<<a++<<endl;
   cout<<"the value of a-- is "<<a--<<endl;
   cout<<"the value of ++a is "<<++a<<endl;
   cout<<"the value of --a is "<<--a<<endl;
   cout<<endl;

   //comparision operators
   cout<<"following are the comaprission operators in c++"<<endl;
   cout<<"the value of a==b"<<(a==b)<<endl;
   cout<<"the value of a!=b"<<(a!=b)<<endl;
   cout<<"the value of a>=b"<<(a>=b)<<endl;
   cout<<"the value of a<=b"<<(a<=b)<<endl;
   cout<<"the value of a>b"<<(a>b)<<endl;
   cout<<"the value of a<b"<<(a<b)<<endl;

   
   
 
   

    return 0;

}