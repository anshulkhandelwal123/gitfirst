#include<iostream>
using namespace std;
int main()
{
     int a=7;
     int *b = &a ;
     cout<< " addresss of a "<<b<<endl;
     cout<< " thee address of a is "<<&a<<endl;

    cout <<"value of b is "<<*b<<endl;
    int **c = &b;
    cout<< "adress"<<c<<endl;
    cout<<&b<<endl;
    cout<<"value"<<*c<<endl;
    cout<<"value at c " << **c<<endl;
    return 0;

}