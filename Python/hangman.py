import random
def welcome():
    print("WELCOME TO HANGMAN!!")
    print("\n Try to guess the word in 6 tries or less")
    print("\n \n \n")
    hangman()

def hangman():
    word = random.choice(["abroad","accept","access","across","acting","action","active","actual","advice","advise","affect","afford","afraid","agency","agenda","almost","always","amount"])
    turns = 7
    guessed = " "
    valid = "abcdefghijklmnopqrstuvwxyz"
    while len(word)>0:
        missed = 0
        msg=" "
        for letter in word:
            if letter in guessed:
                msg = msg + letter
            else:
                msg = msg + " _ "
                missed = missed + 1
            if msg == word:
                print(msg)
                print("CORRECT!! THE WORD WAS ",word)
                break
        print("ENTER THE WORD: ",msg)
        guess=input()
        if guess in valid:
            guessed = guessed + guess
        else:
            print("enter a valid letter")
            guess=input()
        if guess not in word:
            turns = turns - 1
            if turns == 6:
                print('''
                            _ _ _
                           |     |
                           |
                           |
                          _|_
                                      ''')
            if turns == 5:
                print('''
                            _ _ _
                           |     |
                           |     O
                           |
                          _|_
                                      ''')
            if turns == 4:
                print('''
                            _ _ _
                           |     |
                           |     O
                           |     |
                          _|_
                                      ''')
            if turns == 3:
                print('''
                            _ _ _
                           |     |
                           |     O
                           |     |_
                          _|_
                                      ''')
            if turns == 2:
                print('''
                            _ _ _
                           |     |
                           |     O
                           |    _|_
                          _|_
                                      ''')
            if turns == 1:
                print("YOU HAVE FAILED :/ \n THE WORD WAS ",word)
                break
welcome()
