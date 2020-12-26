voted = {}

def checkVoter(name):
    if voted.get(name):
        print("돌려보내세요!")
    else:
        voted[name] = True
        print("투표하게하세요")

checkVoter("tom")
checkVoter("mike")
checkVoter("mike")