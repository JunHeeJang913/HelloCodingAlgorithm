#include <iostream>
#include <vector>

using namespace std;

template <class T>
vector<T> quickSort(const vector<T>& arr){
    //base case
    if(arr.size()<2)
        return arr;
    
    const T pivot=arr.front();
    vector<T> less;
    vector<T> greater;

    typename vector<T>::const_iterator itr;
    for(itr = ++arr.begin();itr!=arr.end();++itr){
        if(*itr<=pivot)
            less.push_back(*itr);
        else
            greater.push_back(*itr);        
    }

    //sort two sublist
    less = quickSort(less);
    greater = quickSort(greater);

    //merge the three sublist
    vector<T> sortedList;
    sortedList.insert(sortedList.end(), less.begin(), less.end());
    sortedList.push_back(pivot);
    sortedList.insert(sortedList.end(), greater.begin(), greater.end());

    return sortedList;
}

template <class T>
void printVector(const vector<T> &arr){
    cout<<"[ ";
    typename vector<T>::const_iterator itr;
    for(itr=arr.begin();itr!=arr.end();++itr){
        cout<<*itr<<" ";
    }
    cout<<"]"<<endl;
}

int main(void){
    vector<int> arr = {10,5,2,3};

    cout<<arr.front();
    printVector(arr);    
    printVector(quickSort(arr));
}

/*
const vector 를 반복자로 받을 때에는 const_iterator를 써야한다.

반복자와 관련이있음
vector.begin()
vector.end()

원소 접근과 관련이 있음
vector.front()
vector.back()

두 벡터를 합치는 방법
list1.insert(list1.end(), list2.begin(), list2.begin())
*/