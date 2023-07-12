import random
import time
print("I will pick a number between 1 and 100. \n")
time.sleep(3)
print("Picking a number...")
time.sleep(2)
guess = int(input("What is your guess? \n"))
correct = random.randint(1, 100)
guess_count = 1
while guess != correct:
    time.sleep(1)
    print("... ")
    time.sleep(1)
    guess_count += 1
    if guess > correct:
        guess = int(input("Guess lower. What is your new guess? \n"))
    else:
        guess = int(input("Guess higher. What is your new guess? \n"))
time.sleep(1)
print("... ")
time.sleep(1)
print(f"You got it! The right answer was {correct} \n It took you {guess_count} tries.")