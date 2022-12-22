//Upgrade-essentials
//Make a C++ program to print grades based on score entered.

#include <iostream>
using namespace std;

int main(){
    int score;

    cout<<"\nEnter score to know your grade: ";
    cin>>score;

    if (score >90)
    {
        cout<<endl<<"Your grade is A";
    }
    else if (score >= 80)
    {
        cout<<endl<<"Your grade is B+";
    }
    else if (score >= 70)
    {
        cout<<endl<<"Your grade is B";
    }
    else if (score >= 60 )
    {
        cout<<endl<<"Your grade is C+";
    }
    else if (score >= 50)
    {
        cout<<endl<<"Your grade is C";
    }
    else if (score >= 40)
    {
        cout<<endl<<"Your grade is D";
    }
    else
    {
        cout<<endl<<"Uff, You failed better luck next time.";
    }
    return 0;

}
