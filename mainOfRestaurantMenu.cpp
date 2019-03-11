#include <iostream>
using namespace std;

int choice;
int total;
char sides;
int tableOne()
{
    switch(choice)
    {
        case 1: total+=5;
                        switch (sides)
                        { case 'a': total += 2;
                                break;
                            case 'b': total += 1;
                            default:total+=0;
                                }
            break;
        case 2: total+=7;
            switch (sides)
        { case 'a': total += 2;
                break;
            case 'b': total += 1;
            default:total+=0;
        }
                        
    }
    return total;
}

int main ()
{
    cout<<"**WELCOME TO TWELVE TABLE**"<<endl;
    cout<<"             Menu: \n";
    cout<<"1. 3 piece chicken for $5 (a.fries: $2 b.drinks: $1)\n";
    cout<<"2. 5 piece chicken for $7 (a.fries: $2 b.drinks: $1)\n \n";
    
    cout<<"please enter your choice :";
    cin>>choice;
    cout<<"would you like some sides with that? Enter a for fries and b for drinks:";
    cin>>sides;
    cout<<endl<<endl;
    
    cout<<"your total is $"<<tableOne()<<endl<<endl;
    return 0;
}
