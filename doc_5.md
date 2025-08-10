Documentation for Question 5

(a) Data Structure  
An adjacency matrix also known as 2D array is a way to represent a graph.  
Each cell at position [i][j] tells if there's a  edge between node i and node j.  
A separate array called visited[] to track nodes already seen.

(b) Functions  
- BFS: Breadth First Search(BFS) uses a queue to explore the graph layer by layer.  
  It starts from given node, visits its corresponding node gradually to the end.
- DFS: Depth First Search (DFS) uses recursion which goes deep into one path before coming back.  
  For both functions, we update the visited array to avoid repeating nodes.

(c) main()  
First, User has to enter the number of nodes and the graph's connections as a matrix.  
Then we run BFS and DFS starting from node 0.  
Both functions print the order in which nodes are visited.

(d) Sample Output  
Enter number of nodes: 4  
Enter adjacency matrix:  
0 1 1 0  
1 0 0 1  
1 0 0 1  
0 1 1 0  

BFS starting from node 0: 0 1 2 3  
DFS starting from node 0: 0 1 3 2
