import tkinter as tk
from tkinter import *
from tkinter import messagebox
window = tk.Tk()
window.title("TKinter")
def message():
    res="Username :"+ txt.get()
label.configure(text=res)
def r1():
    messagebox.showinfo('Button Selected!','First')
def r2():
    messagebox.showinfo('Button Selected!','Second')
def r3():
    messagebox.showinfo('Button Selected!','Third')
frame=tk.Frame(height=20,width=60,bg="red")
frame.pack(side=tk.TOP)
label=tk.Label(master=frame)
label.pack()
rad1=Radiobutton(window,text='First',value=1,command=r1)
rad2=Radiobutton(window,text='Second',value=2,command=r2)
rad3=Radiobutton(window,text='Third',value=3,command=r3)
rad1.pack()
rad2.pack()
rad3.pack()