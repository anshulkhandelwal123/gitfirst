#include<iostream>
using namespace std;
 
 
 
     struct employee{
     int id;
     char favchar;
     int salary;
     }  ;  
     union money
     {
        int paisa;
        float pouunds;
        char car ; 
     };
     
     
    int main()
    {
        struct employee anshul;
        struct employee rohan;
        union money a1;
        a1.car='c';
        a1.paisa= 11;
        
        cout<<a1.car<<endl;
        cout<<a1.paisa<<endl;

        


       /* anshul.id = 1;
        anshul.favchar='a';
        anshul.salary=12000;
        cout<<"the employee anshul details "<<anshul.id<<endl;
        cout<<anshul.favchar<<endl;
        cout<<anshul.salary<<endl;*/


        return 0;



        
    }
 