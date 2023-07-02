#include <iostream>
using namespace std;
void PrintHi()
{
    cout<<"Hi"<<endl;
    return;
}
int sum(int a, int b){
    int c;
    c= a+b;
    a=500;
    cout<<"the value of c is "<<c<<endl;
    return c;
}
//void Swap(int a,int b)
void Swap(int &a,int &b)
{
    int c;
    c =a ;
    a=b;
    b=c;
    cout<<a<<" "<<b<<endl;
    return;
}
int fun(int &a,int &b)
{
    a=99999;
    b=99999;
    cout<<a<<" "<<b<<endl;
}

int main()
{
    PrintHi();
    int a,b;
    int c;
    a=4;
    b=6;
    //c=75;
    // int d;
    // d = sum(a,b);
    //cout<<"the sum is "<<d<<" "<<"the value of a is "<<a;
    // cout<<"the value of c is "<<c<<endl;
    swap(a,b);
    cout<<"the values of a and b afrer swapping outside the function are "<< a <<" "<<b<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}   