//stl에 대한 공부 필요...ㅠ

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <queue>
#include <unordered_set>

using std::cout;
using std::endl;

bool personIsSeller(const std::string & person){
    return person.back() == 'm';
}

template <class T>
bool search(const T & name, const std::unordered_map<T,std::vector<T> > & graph){
    std::queue<T> searchQueue;
    std::unordered_set<T> searched;

    for(auto & friendName : graph.find(name)->second)
        searchQueue.push(friendName);
   
    
    while(searchQueue.empty()==false){
        T&person = searchQueue.front();
        searchQueue.pop();

        if(searched.find(person) == searched.end()){
            if(personIsSeller(person)==true){
                cout<<person<<" is a mango seller!"<<endl;
                return true;
            }
            for(auto & friendName : graph.find(person)->second)
                searchQueue.push(friendName);
            searched.insert(person);
        }
    }
    return false;
}

int main(void){
    std::unordered_map<std::string, std::vector<std::string>> graph;
    graph.insert({"you", {"alice", "bob", "claire"}});
    graph.insert({"bob", {"anuj", "peggy"}});
    graph.insert({"alice", {"peggy"}});
    graph.insert({"claire", {"thom", "jonny"}});
    graph.insert({"anuj", {}});
    graph.insert({"peggy", {}});
    graph.insert({"thom", {}});
    graph.insert({"jonny", {}});

    std::string name = "you";
    bool result = search(name, graph);
    cout << "Found mango seller: " << result << endl;
}