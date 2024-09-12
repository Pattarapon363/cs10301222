#include<iostream>
using namespace std;
int Plus1(int x); // signature
double Plus1double(double x);

template <typename T> T Plus1T(T x); 

int main()
{
    cout<<Plus1double(1)<<endl;
    return 0;
}

double Plus1double(int x){
    return x+1;
}

int Plus1(int x){
    return x+1;
}