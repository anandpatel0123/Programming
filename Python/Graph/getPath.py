class Graph:
    def __init__(self,nVertices):
        self.nVertices = nVertices
        self.adjMatrix = [[0 for i in range(nVertices)] for j in range(nVertices)]

    def addEdge(self,v1,v2):
        self.adjMatrix[v1][v2] = 1
        self.adjMatrix[v2][v1] = 1
    
    def removeEdge(self,v1,v2):
        if self.containEdge(v1,v2) is False:
            return
        self.adjMatrix[v1][v2] = 0
        self.adjMatrix[v2][v1] = 0

    def containEdge(self,v1,v2):
        return True if self.adjMatrix[v1][v2] > 0 else False
    
    def __dfsHelper(self,sv,visited):
        print(sv)
        visited[sv] = True
        for i in range(self.nVertices):
            if (self.adjMatrix[sv][i] > 0 and visited[i] is False):
                self.__dfsHelper(i,visited)

    def dfs(self):
        visited = [False for i in range(self.nVertices)]
        for i in range(self.nVertices):
            if visited[i] is False:
                self.__dfsHelper(i,visited)
    def getPathHelper(self, v1, v2, visited, list):

        if self.adjMatrix[v1][v2] > 0:
            list.append(v2)
            list.append(v1)
            
            return list
        
        visited[v1] = True
        
        for i in range(self.nVertices):
            if self.adjMatrix[v1][i] > 0  and visited[i] is False:
                if self.getPathHelper(i, v2, visited, list):
                    list.append(v1)
                    
                    return list 
             
        return False
    
    
    def getPath(self, v1, v2):
        visited = [False for i in range(self.nVertices)]
        return self.getPathHelper(v1, v2, visited, [])
                    
    def __str__(self):
        return str(self.adjMatrix)

g = Graph(7)
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(0, 3)

g.addEdge(1, 5)
g.addEdge(2, 4)
g.addEdge(3, 6)

g.addEdge(4, 6)
print(g)
g.dfs()
print(g.getPath(0,6))
