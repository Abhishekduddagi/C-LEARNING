#include<iostream>
#include<time.h>
using namespace std;

void EASYROUND();
void MEDIUMROUND();
void HARDROUND();

int main()
{
    system("cls");

    int input;
    
    cout<<"......................................................................................"<<endl;
    cout<<"......................................................................................"<<endl;
    cout<<"THE LUCKY DICE"<<endl;
    cout<<"DEVELOPED BY ABHISHK DUDDAGI"<<endl;
    cout<<"......................................................................................"<<endl;
    cout<<"......................................................................................"<<endl;
    
    cout<<"MENU"<<endl;
    cout<<"1 . EASY ROUND"<<endl;
    cout<<"2 . MEDIUM ROUND"<<endl;
    cout<<"3 . HARD ROUND"<<endl;
    cout<<"......................................................................................"<<endl;
    cout<<"......................................................................................"<<endl;
    cin>> input;
    switch (input)
    {
    case 1:
       EASYROUND();
        break;
    
    case 2:
       MEDIUMROUND();
        break;
    
     case 3:
      HARDROUND();
        break;
    
    default:
      cout<<"INVALID CHOICE "<<endl;
        break;
    }
    
    system("PAUSE");
}

void EASYROUND()
{
    srand(time(NULL));
    int number;
    int EASY;
    cout<<"......................................................................................"<<endl;
    cout<<"......................................................................................"<<endl;
    cout<<"ENTER NUMBER OUT OF 3"<<endl;
    cout<<"......................................................................................"<<endl;
    cout<<"......................................................................................"<<endl;
    cin>>number;
    EASY=(rand()%3)+1;

    if (number==EASY)
    {
    cout<<"YOU WIN"<<endl;
    }
    
    else
    {
    cout<<"BETTER LUCK NEXT TIME "<<endl;
    }
    
    cout<<"COMPUTER NUMBER WAS \t"<<EASY<<endl;

}

void MEDIUMROUND()
{srand(time(NULL));
    int number;
    int MEDIUM;
    cout<<"......................................................................................"<<endl;
    cout<<"......................................................................................"<<endl;
    cout<<"ENTER NUMBER OUT OF 5"<<endl;
    cout<<"......................................................................................"<<endl;
    cout<<"......................................................................................"<<endl;
    cin>>number;
    MEDIUM=(rand()%5)+1;

    if (number==MEDIUM)
    {
    cout<<"YOU WIN"<<endl;
    }
    
    else
    {
    cout<<"BETTER LUCK NEXT TIME "<<endl;
    }
    
    cout<<"COMPUTER NUMBER WAS \t"<<MEDIUM<<endl;
}
void HARDROUND()
{
 srand(time(NULL));
    int number;
    int HARD;
    cout<<"......................................................................................"<<endl;
    cout<<"......................................................................................"<<endl;
    cout<<"ENTER NUMBER OUT OF 10"<<endl;
    cout<<"......................................................................................"<<endl;
    cout<<"......................................................................................"<<endl;
    cin>>number;
    HARD=(rand()%10)+1;

    if (number==HARD)
    {
    cout<<"YOU WIN"<<endl;
    }
    
    else
    {
    cout<<"BETTER LUCK NEXT TIME "<<endl;
    }
    
    cout<<"COMPUTER NUMBER WAS \t"<<HARD<<endl;

}
