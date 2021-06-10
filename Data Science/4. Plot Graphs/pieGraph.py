import matplotlib.pyplot as plt

sizes = [3,4,6,2]
labels = ["A","B","C","D"]
colors = ["blue","yellow","magenta","red"]
plt.pie(sizes,colors=colors,labels=labels)
plt.axis("equal")
plt.show()

sizes = [3,4,6,2]
labels = ["A","B","C","D"]
colors = ["red","yellow","magenta","blue"]
explode = [0.1,0,0,0]
plt.pie(sizes,colors=colors,explode=explode,labels=labels,autopct="%.1f%%",counterclock=False,startangle=100) #autopct for percentage
plt.axis("equal")
plt.title("Pie Graph")
plt.show()