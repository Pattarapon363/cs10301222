#include<iostream>
using namespace std;
int main(){
 int a=18;
 //a -=4; //a=a-4;
 a +=2;  //a=a+2;
 cout<<a<<endl;
string ans= (a % 2)?"odd":"event";
//if( a % 2){ans="odd";}else{ans="event";}
  return 0;
}