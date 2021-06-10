import matplotlib.pyplot as plt
import numpy as np

year = [2012,2013,2014,2015,2016,2017]
salary = [12,13,14,17,19,20]
population = [100,120,180,250,300,370]

plt.scatter(year,salary,label="population", s=population, c = 'r') #in color we can pass list of color same size
plt.title("Bubble Chart")

plt.ylabel("salary",size=15)
plt.xlabel("Year",size=15)

plt.grid()
plt.legend()
plt.show()

plt.scatter(year,salary,s=population, c = 'r', alpha=0.5) #alpha makes bubble transparent
plt.title("Bubble Chart")
plt.show()


c = np.arange(len(year))

plt.scatter(year,salary,s=population, c = c, alpha=0.5) # pass the list in color
plt.title("Bubble Chart")
plt.show()

#default edgecolor is same as color of circle
plt.scatter(year,salary,s=population, c = c, alpha=0.5, edgecolor='black') 
plt.title("Bubble Chart")
plt.show()

plt.scatter(year,salary,s=population, c = c, alpha=0.5, edgecolor='black',marker='^') 
plt.title("Bubble Chart")
plt.show()

#text beside the marker
plt.scatter(year,salary,s=population, c = c, alpha=0.5, edgecolor='black',marker='^') 
plt.title("Bubble Chart")

#plt.text(year[0]+0.1, salary[0]+0.1, population[0])
for i in range(len(year)):
    plt.text(year[i]+0.1, salary[i]+0.1, population[i])
    
plt.axis([2011,2018,10,30])
plt.show()