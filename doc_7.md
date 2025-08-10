Documentation for Question 7

(a) Data Structure  
2D array is used to store the graph as a matrix where each cell contains the weight of going from one node to another.  
A large number like "infinity" or no path is used,when there’s no direct connection. 
Two arrays are used:  
- dist[]: keeps track of shortest known distance from the source node to every other node.  
- visited[]: keeps track of which nodes we’ve already processed.

(b) Functions  
- minDistance: It goes through all nodes and finds closest node to source and hasn’t been visited yet.  
- dijkstra: This is the main function that performs Dijkstra’s algorithm.  
  It starts from a source node and updates the shortest path to all other nodes by checking neighbors.

(c) main()  
A graph with 5 nodes and hardcode its weights in a 2D array.  
Call dijkstra() to find the shortest paths from node 0 to all the other nodes.  
The distances are printed at the end.

(d) Sample Output  
Shortest distances from node 0:  
To 0: 0  
To 1: 4  
To 2: 6  
To 3: 9  
To 4: 8
