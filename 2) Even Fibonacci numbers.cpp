#include<iostream>
using namespace std;
int main(){
int sum = 0;
int a = 1;
int b = 1;
int c = a + b;
while(c < 4000000){
    sum += c;
    a = b + c;
    b = c + a;
    c = a + b;
}
cout<<sum<<endl;
}
