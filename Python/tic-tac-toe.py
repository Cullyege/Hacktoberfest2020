from tkinter import *
root = Tk()

btn = [[0,0,0],
       [0,0,0],
       [0,0,0]]

text = [[0,0,0],
       [0,0,0],
       [0,0,0]]

count = 0

##Configure buttons with X and O
def tictactoe(rows,col):
    global count
    count += 1
    if count % 2 == 0:
        text[rows][col] = 'O'
        btn[rows][col].configure(text='O',state=DISABLED)
    else:
        text[rows][col] = 'X'
        btn[rows][col].configure(text='X',state=DISABLED)
    return match(rows,col)

##Match Horizontal, Vertical, and Diagonal Array
def match(x,y):
    global count
    win = 0
    for a in range(3):
        if text[0][a] == text[1][a] == text[2][a] == 'X':
            lblwin.configure(text='Winner: X')
            lblwin.grid(rows=3,column=0,columnspan=3)
            win += 1
        elif text[0][a] == text[1][a] == text[2][a] == 'O':
            lblwin.configure(text='Winner: O')
            lblwin.grid(rows=3,column=0,columnspan=3)
            win += 1
        elif text[a][0] == text[a][1] == text[a][2] == 'X':
            lblwin.configure(text='Winner: X')
            lblwin.grid(rows=3,column=0,columnspan=3)
            win += 1
        elif text[a][0] == text[a][1] == text[a][2] == 'O':
            lblwin.configure(text='Winner: O')
            lblwin.grid(rows=3,column=0,columnspan=3)
            win += 1
            
    if text[0][0] == text[1][1] == text[2][2] == 'X' or text[0][2] == text[1][1] == text[2][0] == 'X':
        lblwin.configure(text='Winner: X')
        lblwin.grid(rows=3,column=0,columnspan=3)
        win += 1
    elif text[0][0] == text[1][1] == text[2][2] == 'O' or text[0][2] == text[1][1] == text[2][0] == 'O':
        lblwin.configure(text='Winner: O')
        lblwin.grid(rows=3,column=0,columnspan=3)
        win += 1
        
    if count == 9 and win == 0:
        btnReset.grid(rows=4,column=0,columnspan=3)
        lblwin.configure(text='Draw')
        lblwin.grid(rows=3,column=0,columnspan=3)
    elif count == 9:
        btnReset.grid(rows=4,column=0,columnspan=3)

##Reset tic-tac-toe      
def reset():
    for rows in range(3):
        for col in range(3):
            btn[rows][col].configure(text='',state=NORMAL)
            text[rows][col] = 0
            lblwin.configure(text='')

##Displaying 3x3 buttons           
for rows in range(3):
    for col in range(3):
            
        btn[rows][col] = Button(width=3,height=1, text='', font=('Centry Gothic',60,'bold'), command=lambda x=rows, y=col: tictactoe(x,y))
        btn[rows][col].grid(row=rows,column=col)
        
lblwin = Label(text='',font=('Century Gothic',20,'bold'))
btnReset = Button(width=10,height=1, text='Reset',font=('Century Gothic',15,'bold'),command=reset)

mainloop()

    


