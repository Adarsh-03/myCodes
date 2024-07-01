import random

# Define the options
options = ["rock", "paper", "scissors"]

# Define the function to play the game
def play_game():
    # Get the user's choice
    user_choice = input("Choose rock, paper, or scissors: ")

    # Get the computer's choice
    computer_choice = random.choice(options)

    # Determine the winner
    if user_choice == computer_choice:
        print("It's a tie!")
    elif user_choice == "rock":
        if computer_choice == "paper":
            print("You lose! Paper covers rock.")
        else:
            print("You win! Rock smashes scissors.")
    elif user_choice == "paper":
        if computer_choice == "scissors":
            print("You lose! Scissors cut paper.")
        else:
            print("You win! Paper covers rock.")
    elif user_choice == "scissors":
        if computer_choice == "rock":
            print("You lose! Rock smashes scissors.")
        else:
            print("You win! Scissors cut paper.")
    else:
        print("Invalid input. Please try again.")

# Play the game
play_game()