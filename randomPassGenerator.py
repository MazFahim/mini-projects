#bismillahir rahmanir rahim

import random

char = ["!", "@", "#", "$", "%", "&", "*", "/"]
password = ""

length = int(input("Enter the length of your password:"))

for i in range(length):
    a = random.randint(0, 7)
    if a == 0:
        m = chr(random.randint(65, 90))
    elif a == 1:
        m = chr(random.randint(65, 90)).lower()
    elif a == 2:
        m = chr(random.randint(48, 57))
    elif a == 3:
        m = chr(random.randint(65, 90))
    elif a == 4:
        m = chr(random.randint(65, 90)).lower()
    elif a == 5:
        m = chr(random.randint(48, 57))
    else:
        n = random.randint(0, 7)
        m = char[n]

    password = str(password) + m

print(password)
