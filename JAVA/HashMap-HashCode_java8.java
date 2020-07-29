HashMap Changes in Java 8

-     As we know now that in case of hash collision entry objects are
stored as a node in a linked-list and equals() method is used to compare keys. 

-   That comparison to find the correct key with in a linked-list is a linear 
operation so in a worst case scenario the complexity becomes O(n).

-   To address this issue, Java 8 hash elements use balanced trees instead of
linked lists after a certain threshold is reached. 

-   Which means HashMap starts with storing Entry objects in linked list but after
the number of items in a hash becomes larger than a certain threshold, 
*the hash will change from using a linked list to a balanced tree* , which will
improve the worst case performance from O(n) to O(log n)
