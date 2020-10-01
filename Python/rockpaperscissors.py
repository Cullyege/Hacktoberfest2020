# Python Random Module
import random

# Intro
print("Rock, Paper, Scissors...")

# Function
def try_again():
  # Random Choice (Rock, Paper, or Scissors)
    R_P_S = ["Rock", "Paper", "Scissors"]
    computer = random.choice(R_P_S)

  # Player's choice
    player = input("your choice: ").lower().capitalize()

  # If the program chose rock
    if computer == "Rock":
    	# If the player chose rock
        if player == "Rock":
            print(f"I chose {computer}, you chose {player}\nit's a tie!")
        # If the player chose paper
        elif player == "Paper":
            print(f"I chose {computer}, you chose {player}\nYou win!")
        # If the player chose scissors
        elif player == "Scissors":
            print(f"I chose {computer}, you chose {player}\nI win!")

  # If the program chose paper
    elif computer == "Paper":
    	# If the player chose rock
        if player == "Rock":
            print(f"I chose {computer}, you chose {player}\nI win!")
        # If the player chose paper
        elif player == "Paper":
            print(f"I chose {computer}, you chose {player}\nIt's a tie!")
        # If the player chose scissors
        elif player == "Scissors":
            print(f"I chose {computer}, you chose {player}\nYou win!")

  # If the program chose scissors
    elif computer == "Scissors":
    	# If the player chose rock
        if player == "Rock":
            print(f"I chose {computer}, you chose {player}\nYou win!")
        # If the player chose paper
        elif player == "Paper":
            print(f"I chose {computer}, you chose {player}\nI win!")
        # If the player chose scissors
        elif player == "Scissors":
            print(f"I chose {computer}, you chose {player}\nIt's a tie") 

  # If the player wants to play again
    play_again = input("Do you want to play again? yes or no: ").lower().capitalize()
    # If the player says yes, go back to the function
    if play_again == "Yes":
        try_again()
    # If the player says no, say goodbye
    elif play_again == "No":
        print("Goodbye")

# End of function
try_again()
