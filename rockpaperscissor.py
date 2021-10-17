import random

while True:
    choice = int(input("Press 1 for rock,2 for paper and 3 for scissor:"))
    if choice == 1:
        print("You choose Rock")
    elif choice == 2:
        print("You choose Paper")
    elif choice == 3:
        print("You choose Scissor")
    else:
        print("Wrong choice")
        break

    pc = random.randint(1, 3)
    if pc == 1:
        print("PC choose Rock")
    elif pc == 2:
        print("PC choose Paper")
    elif pc == 3:
        print("PC choose Scissor")

    if pc == 1 and choice == 2:
        print("You won")
        break
    elif pc == 2 and choice == 3:
        print("You won")
        break
    elif pc == 3 and choice == 1:
        print("You won")
        break
    elif pc == choice:
        print("Try again")
    else:
        print("You lost")

print("Happy gaming")
