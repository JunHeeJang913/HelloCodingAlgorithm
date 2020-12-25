#include <iostream>
using namespace std;

template<class T>
int binarySearch(T * list, T item){
    int low = 0;
    int high = sizeof(list)/sizeof(T);

    while(low<=high){
        int mid = (low+high)/2;
        int guess = list[mid];

        if(guess==item)
            return mid;
        else if(guess<item)
            low = mid+1;
        else
            high = mid - 1;        
    }
    
    return -1;
}

int main(void){
    int my_list[5] = {1,3,5,7,9};
    
    cout<<binarySearch(my_list,3)<<endl;
    cout<<binarySearch(my_list,2)<<endl;
}