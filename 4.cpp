#include<iostream>
using namespace std;
int main ()
{
    int a = 5 ;
    int b = 8;
    cout<<"the airthemtic opertotrs are add \n"<<a+b<<endl;
    cout<<"sub"<<a-b<<endl;
    cout<<"multi"<<a*b<<endl;
    cout<<"modulus"<<a%b<<endl;
    cout<<"inc"<<++a<<endl;
    cout<<"dec"<<--b<<endl;
    cout<<endl;

    cout<<"compariosn =="<<(a==b)<<endl;
    cout<<">="<<(a>=b)<<endl;
    cout<<"<="<<(a<=b)<<endl;
    cout<<"!="<<(a!=b)<<endl;
    cout<<endl;

    cout<<"logical && "<<((a==b) && (a>=b) )<<endl;

    cout<<endl;
   int r = 5;
   int & n = r;
   cout<< " refrence vari"<< n<<endl;

  cout<< "TYPE CASTING ";
    float s = 67.77;
    int h=5;
    cout<< "int m debna "<<(int)s<<endl;
    cout<<(float)h<<endl;
    cout<<"float"<<s<<endl;



}