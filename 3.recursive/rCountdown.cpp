#include <iostream>
using namespace std;
void countdown(int i){
    cout<<i<<endl;
    if(i<=1)        //기본단계
        return; 
    else            //재귀단계
        countdown(i-1);
}

int main(void){
    countdown(3);
}