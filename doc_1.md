Documentation for Question 1

(a) Data Structure  
In this code, stack is used to store brackets as we go through the expression.  
If an opening brackets like (, {, or [, are found, we put it in the stack.  
We check if it matches the last one we stored, If we find a closing bracket like ), }, or ],  
When all brackets have a match, the stack is empty in the end,meaning the expression is balanced.

(b) Functions  
- push: adds a bracket to the top of the stack.  
- pop: removes the top bracket from the stack.  
- isMatching: checks if an opening and closing bracket go together.  
- isBalanced: goes through the expression and uses the stack to check if it’s balanced.

(c) main()  
Three expressions are checked to see if the brackets are balanced.  
After each test, It prints if it is balanced or not.

(d) Sample Output  
Expression 1 is not balanced  
Expression 2 is not balanced  
Expression 3 is balanced
