#include <iostream>
#include <unordered_map>
#include <string>
#include <utility>

using std::cout;
using std::endl;

std::unordered_map<std::string, bool> voted; 

void checkVoter(const std::string & name){
    auto search = voted.find(name);
    if(search == voted.end() || search->second == false){
        voted.insert({name, true});
        cout<<"Let them vote!"<<endl;
    }
    else
        cout<<"kick them out!"<<endl;
}

int main(void){
    checkVoter("tom");
    checkVoter("mike");
    checkVoter("mike");
}