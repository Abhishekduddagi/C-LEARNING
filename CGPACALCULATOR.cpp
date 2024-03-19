#include<iostream>
#include<stdlib.h>
using namespace std;

void ConverttoPercentage();
void  PercentagetoCGPA();

int main()
{
    system("cls");
    int input;
    cout<<"............................................................................."<<endl;
    cout<<                           "CGPA CONVERTER"<<endl;
    cout<<"............................................................................."<<endl;
    cout<<                                "MENU"<<endl;
    cout<<                   "1. CALCULATE CGPA INTO PERCENTAGE"<<endl;
    cout<<                   "2. CGPA calculator"<<endl;
    cout<<"............................................................................."<<endl;
    cout<<"ENTER YOUR COHOICE"<<endl;
    cin>>input;
    switch (input)
    {
    case 1:
        ConverttoPercentage();
        break;
     case 2:
        PercentagetoCGPA();
        break;
    
    default:
        break;
    }
    }

    void ConverttoPercentage()
    {
        int CGPA;
        cout<<endl;
        cout<<"............................................................................."<<endl;
        cout<<"ENTER YOUR CURRENT CGPA"<<endl;
        cin>>CGPA;
        cout<<"\n YOUR CGPA INTO PERCENTAGE \t"<<CGPA*9.5<<endl;

    }
    
    void   PercentagetoCGPA()
    {
      int Percentage;
      cout<<endl;
      cout<<"............................................................................."<<endl;
      cout<<"ENTER YOUR CURRENT Percentage"<<endl;
      cin>>Percentage;
      cout<<"\n YOUR PERCENTAGE INTO CGPA \t"<<Percentage/9.5<<endl;
     
    }