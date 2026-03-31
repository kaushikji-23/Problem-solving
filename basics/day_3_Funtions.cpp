// GFG Problem  - Sum of first n natural numbers
# include <iostream>
using namespace std;

int sum(int n) {
    return n*(n+1)/2;
}

int main()
{
    int n;
    cout<< "Enter a number:";
    cin>>n;

    cout<<"Sum of first"<<n<<"natural numbers is:"<<sum(n); 
}