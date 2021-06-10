import random
def start_game():
    mat = [[0 for i in range(4)]for i in range(4)]
    return mat


def add_new_2(mat):
    r = random.randint(0,3)
    c = random.randint(0,3)
    while(mat[r][c] != 0):
        r = random.randint(0,3)
        c = random.randint(0,3)
    mat[r][c] = 2

def reverse(mat):
    new_mat = []
    
    for i in range(4):
        new_mat.append([])
        for j in range(4):
            new_mat[i].append(mat[i][4-j-1])
    
    return new_mat

def transpose(mat):
    new_mat = []
    for i in range(4):
        new_mat.append([])
        for j in range(4):
            new_mat[i].append(mat[j][i])
            
    return new_mat



    
def compress(mat):

    new_mat = [[0 for i in range(4)]for i in range(4)]
    
    for i in range(4):
        pos = 0
        for j in range(4):
            if mat[i][j] != 0:
                new_mat[i][pos] = mat[i][j]
                pos+=1
    
    return new_mat

def compress(mat):
    new = []
    for j in range(4):
        partial_new = []
        for i in range(4):
            partial_new.append(0)
        new.append(partial_new)
    done = False
    for i in range(4):
        count = 0
        for j in range(4):
            if mat[i][j] != 0:
                new[i][count] = mat[i][j]
                if j != count:
                    done = True
                count += 1
    return new, done

def merge(mat,done):

    for i in range(4):
        for j in range(3):
            if mat[i][j] == mat[i][j+1] and mat[i][j] != 0:
                mat[i][j] = mat[i][j]*2
                mat[i][j+1] = 0
                done = True
                
    return mat,done

def move_up(game):
    # return matrix after shifting up
    game = transpose(game)
    game, done = compress(game)
    game, done = merge(game, done)
    game = compress(game)[0]
    game = transpose(game)
    return game, done

def move_down(game):
    
    game = reverse(transpose(game))
    game, done = compress(game)
    game, done = merge(game, done)
    game = compress(game)[0]
    game = transpose(reverse(game))
    return game, done


def move_left(game):
    
    # return matrix after shifting left
    game, done = compress(game)
    game, done = merge(game, done)
    game = compress(game)[0]
    return game, done


def move_right(game):
  
    # return matrix after shifting right
    game = reverse(game)
    game, done = compress(game)
    game, done = merge(game, done)
    game = compress(game)[0]
    game = reverse(game)
    return game, done
def get_current_state(mat):
    #Anywhere 2048 is present
    for i in range(4):
        for j in range(4):
            if mat[i][j] == 2048:
                return "WON"
            
    #Anywhere 0 is Present
    for i in range(4):
        for j in range(4):
            if(mat[i][j] == 0):
                return "GAME NOT OVER"
            
    #Every Row and Coloumn except last row and coloum
    for i in range(3):
        for j in range(3):
            if(mat[i][j] == mat[i+1][j] or mat[i][j] == mat[i][j+1]):
                return "GAME NOT OVER"
            
    #Last Row        
    for j in range(3):
        if mat[3][j] == mat[3][j+1]:
            return "GAME NOT OVER"
    
    #Last Coloumn 
    for i in range(3):
        if mat[i][3] == mat[i+1][3]:
            return "GAME NOT OVER"
    
    return "LOST"