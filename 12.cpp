#include<iostream>
using namespace std;
 
 void swap (int* a , int* b){
    int  temp = *a ;
      *a = *b;
     *b= temp;


 }
 int main()
 {
     int a =5;
     int b= 9;
     cout<<"before swapping "<<a<< endl<<b<<endl;
     swap(&a,&b);
     cout<<"the vlaue of a is " <<a<< " the b is "<<b<<endl;
 }