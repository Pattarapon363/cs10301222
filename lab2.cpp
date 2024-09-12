#include<iostream>
using namespace std;
int main()
{

    int A[5];
    A[0]=123;
    cout<<A[0]<<endl;
    char B[6];
    char C[]="Hello\0 World";
    string D="Heiio World";
    B[0]='H'; B[1]='E' ;B[2]='L' ;B[3]='L' ;B[4]='0' ;B[5]=0;
    //cout<<B[0]<<B[1]<<B[2]<<B[3]<<B[4]<<endl;
    cout<<B<<endl;
    cout<<sizeof(C)<< " "<< (int)C[5] <<C <<endl;
    cout<<D.length()<<endl;
    char E[1000];
    sprintf(E,"Hello C Strint %s %d %s" ,C,123,D.c_str());
    cout<<sizeof(E)<<E<<endl;



    return 0;
}