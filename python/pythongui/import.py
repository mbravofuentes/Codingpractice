from tkinter import *
from tkinter import ttk #import libraries

root = Tk() #layout
entry = ttk.Entry(root,width = 50)
entry.pack()
button = ttk.Button(root,text = "Click me!")
button.pack()


def BuClick():
    print(entry.get()) #print the entry from the button click
    entry.delete(0, END) #delete the input from beginning to end
    # entry.insert(0, "Button clicked") //insert element

button.config(command = BuClick)



root.mainloop()
