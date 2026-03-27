#include <iostream>
using namespace std;

int main()
{
    // if-else statement :- 
    int n  = 10;
    if(n%2==0 or n%3==0)
    {
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    // loops  - print sum of 10 numbers :-
    int sum = 0;
    for(int i=1;i<=10;i++){
        sum+=i;
    }
    cout<<"sum of 10 numbers is : "<<sum<<endl;
    
    // print sum of first 10 even numbers :- 
    int sm = 0;
    for(int i=1;i<=10;i++)
    {
        sm+=2*i;
    }
    cout<<"sum of first 10 even numbers is : "<<sm<<endl;

    // print sum of even numbers between 20 and 40 (both included):- 
    int s = 0;
    for(int i=20;i<=40;i++){
        if(i%2==0){
            s+=i;
        }
    }
    cout<<"sum of even numbers between 20 and 40 is : "<<s<<endl;
    
    return 0;
}
