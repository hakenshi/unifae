import tkinter

colors = ["red", "green", "blue", "yellow", "purple"]

# Create the main window with the first color.
root = tkinter.Tk()
root.configure(bg=colors[0])
root.geometry("200x200")
root.title(f"Window {colors[0]}")

# Create additional windows with remaining colors.
for color in colors[1:]:
    win = tkinter.Toplevel(root)
    win.configure(bg=color)
    win.geometry("200x200")
    win.title(f"Window {color}")
root.mainloop()