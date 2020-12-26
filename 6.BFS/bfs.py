from collections import deque

graph = {}
graph["me"] = ["alice", "bob", "claire"]
graph["bob"] = ["anuj", "peggy"]
graph["alice"] = ["peggy"]
graph["claire"] = ["thom", "jonny"]
graph ["anuj"] = []
graph ["peggy"] = []
graph ["thom"] = []
graph ["jonny"] = []

def personIsSeller(name):
    return name[-1] == 'm'

def search(name):
    searchQueue = deque()
    searchQueue += graph[name]
    searched = []   #이미 확인한 사람들
    
    while searchQueue:
        person = searchQueue.popleft()
        if not person in searched:
            if personIsSeller(person):
                print(f"{person} is a mango seller!")
                return True
            else:
                searchQueue += graph[person]
                searched.append(person)
    return False

search("me")