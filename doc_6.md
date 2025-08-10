Documentation for Question 6

(a) Data Structure  
 There are two types of heaps in a normal unsorted array:  
- Min Heap: smallest number is at top.  
- Max Heap: biggest number is at top.  
We store both heaps in arrays, just like a binary tree.

(b) Functions  
- heapifyMin: It makes sure that a parent node is smaller than its children.  
  If it is not, it swaps them and continues fixing down the tree.  
- heapifyMax: It does the opposite meaning that each parent is bigger than its children.  
- buildHeaps: It copies the original array and applies heapify functions  
  to build both min and max heaps.

(c) main()  
A sample array with random numbers is taken.  
Then BuildHeaps are used to create both min and max heaps from it.  
Finally, Both heaps are printed to show the result.

(d) Sample Output  
Min Heap: 1 3 7 9 4 10  
Max Heap: 10 9 7 1 3 4
