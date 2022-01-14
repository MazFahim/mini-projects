import time
import random
import wikipediaapi
import requests
from bs4 import BeautifulSoup
from nltk.tokenize import sent_tokenize

w = wikipediaapi.Wikipedia(language='en', extract_format=wikipediaapi.ExtractFormat.WIKI)
while True:
    a = "https://en.wikipedia.org/wiki/Special:Random"
    u = requests.get(a)
    soup = BeautifulSoup(u.content, 'html.parser')
    title = soup.find(class_="firstHeading").text
    p = w.page(title)
    sum = []
    lines = []
    if p.exists():
        sum = p.summary
    lines = sent_tokenize(sum)
    total_lines = len(lines)
    if total_lines < 10:
        r = total_lines
    else:
        r = 10
    total_time = 0
    total_words = 0
    time.sleep(1)
    ready = input("Press y to start:")
    if ready == 'y':
        for i in range(0, r):
            task = lines[i]
            print(task)
            t0 = time.time()
            written = input()
            t1 = time.time()
            time_taken = t1 - t0
            total_time += time_taken
            words = len(written.split())
            total_words += words

    accuracy = (total_words / total_time) * 60
    print(accuracy, "Word per minutes")
