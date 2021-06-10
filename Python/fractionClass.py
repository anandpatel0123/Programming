class fraction:
    def __init__(self,num=0,deno=1):
        if deno == 0:
            self.deno = 1

        self.num = num
        self.deno = deno
    def simplify(self):
        hcf = 1
        small = min(self.num,self.deno)
        while(small):
            if ((self.deno%small==0) and (self.num%small==0)):
                hcf = small
                break
            small-=1
        self.num = self.num // hcf
        self.deno = self.deno // hcf
            
    def printFraction(self):
        self.simplify()
        print(str(self.num)+"/"+str(self.deno))
    def add(self,other):
        newNum = other.deno*self.num + other.num*self.deno
        newDeno = self.deno * other.deno
        self.num = newNum
        self.deno = newDeno
        self.simplify()
    def multiply(self,other):
        newNum = other.num*self.num
        newDeno = self.deno * other.deno

        self.num = newNum
        self.deno = newDeno
        self.simplify()
    
    
f1 = fraction(10,20)
f1.printFraction()
f2 = fraction(5,2)
f3 = fraction(3,4)
f2.multiply(f3)
f2.printFraction()