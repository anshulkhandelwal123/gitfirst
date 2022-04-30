#include<iostream>
using namespace std;

int main()
{
int age;
    cout<<"tell me your age :"<<endl;
    cin>>age;
    if((age<18) && (age>0))
    {
        cout<<"you are not eligible to party "<<endl;
    }
    else if (age==18)
    {
        cout<<"youu just come to an age to come party "<<endl;
    }
    else if (age<1)
    {
        cout<<"kid just born want to come in party"<<endl;

    }
    else
    {
        cout<<"welcome to party boiis"<<endl;
    }
    cout<<"seitch case "<<endl;

    switch (age)
    {
    case 18:
    cout<<"yoou r 18"<<endl;
        break;
        case 15:
        cout<<"15"<<endl;
        break;
    
    default:
    cout<<"no age were found u enetred "<<endl;
        break;
    }
    return 0;

}