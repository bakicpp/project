import random

user_wins = 0
computer_wins = 0

options = ["rock", "paper", "scissors"]

while True:
    user_input = input("Type Rock/Paper/Scissors or Q to quit. ")
    if user_input == "q":
        break

    if user_input not in options:
        continue

    random_number = random.randint(0,2)
    computer_pick = options[random_number]
    print("Computer picked", computer_pick + ".")

    if user_input == "rock" and computer_pick == "scissors":
        print("You Win!")
        user_wins += 1
        print("Scoreboard\n User : ", user_wins, "\n", "Computer : ", computer_wins)

    elif user_input == "paper" and computer_pick == "rock":
        print("You Win!")
        user_wins += 1
        print("Scoreboard\n User : ", user_wins, "\n", "Computer : ", computer_wins)

    elif user_input == "scissors" and computer_pick == "paper":
        print("You Win!")
        user_wins += 1
        print("Scoreboard\n User : ", user_wins, "\n", "Computer : ", computer_wins)

    elif user_input == computer_pick:
        print("Draw!")
        print("Scoreboard\n User : ", user_wins, "\n", "Computer : ", computer_wins)

    else:
        print("Computer Wins!")
        computer_wins += 1
        print("Scoreboard\n User : ", user_wins, "\n", "Computer : ", computer_wins)

    if computer_wins == 10:
        print("Game Over!")
        print("Computer won the game!")
        quit()

    elif user_wins == 10:
        print("Game Over!")
        print("You won the game!")




print("Goodbye!")
