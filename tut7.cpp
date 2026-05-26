#include <iostream>
using namespace std;

//int C = 45 // globe variable 

int main() {

   // ********************* BUILT IN DATA TYPES *******************

   /* int a,b,c  // local variable 
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    c + a+b
    cout<<"the sum is "<<c;

    cout<<"the globe c is"<<::c; */

    
    // ********************* FLOAT, DOUBLE,AND LONG DOUBLE LITERALS *******************


    /*float d= 34.4f;
    long double e = 34.4l;

    cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;
    
    cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e;*/




    // ********************* REFERANCE VARIABLE *******************

    //Rohan Das----->> Monty--->>Rohu------>>Dangerous Coder  
    
    /*float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;*/



    // ********************* TYPECASTING *******************

    int a= 45;
    float b= 45.46;
    cout<<"the value of a is "<<float(a);
    cout<<"the value of a is "<<float(a);

    cout<<"the value of b is "<<(float)b;
    cout<<"the value of b is "<<float(b); 

    int c= int (b);

    cout<<"the expression is "<<a + b <<endl;
    cout<<"the expression is "<<a + int (b) <<endl;
    cout<<"the expression is "<<a + (int) b <<endl;

    
    

    return 0;
}


