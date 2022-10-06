print("GHOST GAME!")
print("Three doors ahead of you, and a ghost behind one of them")
print("Which door do you want to open?")
door = input("1, 2, or 3? : ")
score = 0

if door == "1":
    print("You escaped!")
    score += 10

elif door == "2":
    print("Ghost!!! Run!!!")
    score = 0

elif door == "3":
    print("You escaped!")
    score += 10

print("Your score: "+ str(score))