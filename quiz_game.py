print("Welcome to the Quiz Game!")

score = 0





playing = input("Do you want to play? ").lower()

if playing != "yes":
    quit()

else:
    print("Okay! Let's play :) ")

print("Where is the capital of Turkey? ")

answer = input("A) Ankara\nB) Istanbul\nC) Izmir\nD) Antalya\n  ").lower()



if answer == "A":
    print("Correct! You win 10 points! ")
    score = score + 10
    print("Your current score is " + str(score))


else:
    print("Upss. Incorrect!")

print("The second question.. ")


print("What is the value of pi number? ")
answer = input("A) 2.18\nB) 4.21\nC) 3.14\nD) 6.42" ).lower()


if answer == 'C':
    print("Correct! You win 10 points! ")
    score = score + 10
    print("Your current score is " + str(score))

else:
    print("Upss. Incorrect!")

print("The game finished!\n")
print("Your score : " + str(score))
