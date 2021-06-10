import matplotlib.pyplot as plt
import numpy as np


x = [1,2,3]
y = [2,4,6]

plt.scatter(x,y)
plt.show()

x = [1,2,3]
y = [2,4,6]


plt.scatter(x,y)
plt.plot(x,y)
plt.show()

x = [1,2,3]
y = [2,4,6]

x2 = [3,4,5]
y2 = [2,4,6]

plt.scatter(x2,y2)
#string 1st char is for color and second char for line or point 
#like p(pentagon), ^(triangle), +, o(circle), -.(dash dot)
plt.plot(x2,y2,"r-.") 

plt.scatter(x,y) 
plt.plot(x,y)
plt.show()

# plot function x^3
# plot a curve graph

x = np.array([1,2,3,4])
y = x**3

plt.plot(x,y)
plt.show()

x = np.arange(0,5,0.1)
y = x**3

plt.plot(x,y,"bo")
plt.show()

a = [3,4,5]
plt.plot(a) #it took y as [0,1,2] starting from 0 to len of a
plt.show()

# color, marker, linewidth, labels for axis, datasets and the title, axis, grid, text
#x = np.array([1,2,3,4])
x = np.arange(0, 5, 0.1)
y  = x **3
y2 = x**2
#plt.plot(x, y, color = "black", marker="p")
plt.plot(x, y, color = "black", linewidth = 5, label = "x^3")

plt.plot(x, y2, color = "red", linewidth = 5, label = "x^2")

#plt.axis([0, 10, 0, 200])

plt.ylabel("y")
plt.xlabel("x")

plt.grid()

plt.text(2, 80, "Text", fontsize=12)

plt.legend()
plt.title("Matplotlib demo")
plt.show()