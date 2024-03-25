#include<iostream>
#include<time.h>
#include<string.h>
using namespace std;

int main()
{
    system("cls");
    int computer,number=3;
    int user; 
    char store;
     srand(time(NULL));

    cout<<"THIS IS A GAME OF STONE PAPER SCISSOR"<<endl;
    cout<<".............................................................................................";
    cout<<"MENU"<<endl;
    cout<<"ENTER 1 FOR PAPER"<<endl;
    cout<<"ENTER 2 FOR STONE"<<endl;
    cout<<"ENTER 3 FOR SCISSOR"<<endl;   
    cout<<"............................................................................................."<<endl;
    cin>>user;
    switch (user)
    {
    case 1:
    cout<<"PAPER";
        break;
    case 2:
    cout<<"STONE";
        break;
    case 3:
    cout<<"SCISSOR";
        break;
    default:
    cout<<"INVALID ENTRY";
        break;
    }
    computer=(rand()%number)+1;
    cout<<"\n AI BOT CHOOSES :"<<computer<<"\t"<<endl;
   if (user==1)
   { 
    if ( computer==1 )
    {
    cout<< "THIS IS TIE"<<endl;
    }
    else if (computer== 2 )
    {
    cout<< "YOU WIN"<<endl;
    }
    
    else
    {
    cout<<"YOU LOSS"<<endl;
    }
    }
   
    else if (user==2)
   { 
    if ( computer==1 )
    {
    cout<< "YOU LOSS"<<endl;
    }
    else if (computer== 2 )
    {
    cout<< "THIS IS TIE"<<endl;
    }
    
    else
    {
    cout<<"YOU WIN"<<endl;
    }
    }

    else
   { 
    if ( computer==1 )
    {
    cout<< "YOU WIN"<<endl;
    }
    else if (computer== 2 )
    {
    cout<< "YOU LOSS"<<endl;
    }
    
    else
    {
    cout<<"THIS IS A TIE"<<endl;
    }
    }

return 0;
}
