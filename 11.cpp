#include<iostream>
using namespace std;
 int sum(int a , int b )
 {
int c = a+b;
return c ;

}
 int main ()
 {
     int num1 , num2;
    cout<< "the first value"<<endl;
    cin>>num1;
    cout<<"the second vallue "<<endl;
    cin>>num2;
    cout<<"the sum is "<<sum(num1,num2)<<endl;
    return 0;
 }