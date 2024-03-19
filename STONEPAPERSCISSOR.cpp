#include<iostream>
#include<string.h>
#include<iomanip>
#include <time.h>
using namespace std;
 int main()
{
    system("cls");

     srand(time(NULL));

    int computerresult=0;
    int number=3;
    int input;

    cout<<"..........................................................................................."<<endl;
    cout<<"STONE PAPER SCISSOR GAME"<<endl;
    cout<<"..........................................................................................."<<endl;
    cout<<endl;
    cout<<"MENU"<<endl;
    cout<<"ENTER 1 FOR PAPER"<<endl;
    cout<<"ENTER 2 FOR STONE"<<endl;
    cout<<"ENTER 3 FOR SCISOOR"<<endl;    
    cout<<endl;
    cin>>input;
    switch (input)
    {
    case 1:
        cout<<"paper"<<endl;
        break;
    case 2:
        cout<<"STONE"<<endl;
        break;
    case 3:
        cout<<"SCISSOR"<<endl;
        break;
    default:
        cout<<"INVALID"<<endl;
        break;
    }
    computerresult=(rand()%number)+1;
   
    cout<<"\n AI BOT CHOOSES :"<<computerresult<<"\t"<<endl;
    switch (computerresult)
    {
    case 1:
        cout<<"PAPER"<<endl;
        break;
    case 2:
        cout<<"STONE"<<endl;
        break;    
    case 3:
        cout<<"SCISSOR"<<endl;
        break;
    default:
    cout<<"INVALID"<<endl;
        break;
    }
    
     system("PAUSE");
     
return 0;     
}