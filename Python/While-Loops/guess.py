guess_no = 9

count = 0 


while count < 3:
    guess = int(input("Guess: "))
    count += 1
    if guess == guess_no:
        print("You won!")
        break
else:
        print("You lose!")
    
 