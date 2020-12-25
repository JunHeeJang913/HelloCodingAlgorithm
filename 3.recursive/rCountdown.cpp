#include <iostream>
using namespace std;
void countdown(int i){
    cout<<i<<endl;
    countdown(i-1);
}

int main(void){
    countdown(3);
}