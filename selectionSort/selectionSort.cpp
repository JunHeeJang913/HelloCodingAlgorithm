#include <iostream>
#include <vector>
using namespace std;

template<class T>
int findSmallestIndex(vector<T>& list){
    T smallest = list[0];
    int smallestIndex = 0;

    for(int i = 1; i<list.size();++i){
        if(list[i]<smallest){
            smallest = list[i];
            smallestIndex = i;
        }
    }

    return smallestIndex;
}

template<class T>
vector<T> selectionSort(vector<T> & oldList){
    vector<T> sortedList;
    int num = oldList.size();
    for(int i=0; i<num;++i){        //while문으로 empty를 사용하면 변수가 줄어든다.
        T smallestIndex = findSmallestIndex(oldList);
        sortedList.push_back(oldList[smallestIndex]);
        oldList.erase(oldList.begin()+smallestIndex);
    }
    return sortedList;
}

template<class T>
void printList(vector<T> & list){
    cout<<"[ ";
    for(auto x: list){
        cout<<x<<" ";
    }
    cout<<"]";
    cout<<endl;
}

int main(void){
    vector<int> myList={5,3,6,2,10};
    vector<int> sortedList=selectionSort(myList);
    printList(myList);
    printList(sortedList);
}