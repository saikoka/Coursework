from astar_euclidean import *
from astar_manhattan import *
from bfs import *
from fire_maze import *
from MapCreator import *
import random

dimension_size = int(input())  # Asks the user for the dimension size of the map and converts the string value to an int
p_value = float(input())  # Asks the user for the probability and converts the string value to a float
import time



print(manhattan(map_creator(dimension_size,p_value))) #Use print statement to test methods


"""solvableMap=map_creator(50,0.2)

start_man = time.time()
print(manhattan(solvableMap))

end_man = time.time()

start_euc = time.time()

print(euclidean(solvableMap))
end_euc = time.time()

print("man", (end_man-start_man) % 60.000000000)
print("euc", (end_euc-start_euc) % 60.000000000)"""




