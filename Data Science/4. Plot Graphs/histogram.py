import matplotlib.pyplot as plt
import numpy as np

a = [1,2,3,4,1,3,4,2,1,1,3]
plt.hist(a)
plt.show()

b = [1,2,1,3,5,4,5,5,4,3,3,10,7,6,7,8,8,20,22,11,14]
xt = np.arange(23)

# by defalut the bars are 10
# and the width of bar is (max-min)/bar
# (22-1)/10 = 2.1


plt.hist(b,edgecolor="black")
plt.xticks(xt)
plt.show()


plt.hist(b,bins=25,edgecolor="black")
plt.xticks(xt)
plt.show()