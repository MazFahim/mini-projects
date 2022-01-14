import time
import random

with open('texts.txt') as f:
    lines = f.readlines()

total_lines = len(lines)
total_time = 0
total_words = 0
time.sleep(1)
for i in range(0, total_lines):
    line_no = random.randint(0, total_lines-1)
    task = lines[line_no]
    print(task)
    t0 = time.time()
    written = input()
    t1 = time.time()
    time_taken = t1-t0
    total_time += time_taken
    words = len(written.split())
    total_words += words

accuracy = (total_words/total_time)*60
print(accuracy)