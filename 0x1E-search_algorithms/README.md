What are searching algorithms:
---------------------------------
Searching algorithms are used to find/locate a specific element/item within a collection of data. They are designed
to efficiently navigate through a structure of data(search space) and locate the desired element(target element). Their main purpose is to determine whether the target element exists in the data collection, and if it does, determine its precise location, or retrieve it.

What is Linear Search:
-----------------------
This is the process of sequentially examining each element in the data set, one after the other, starting from the first element, and comparing it to the target element. If the current element matches exactly with the target element, then true or the index of the current element is returned. Else the search proceeds iterating through the next elements, untila match is found or  the end is reached;upon which No Match is Found is returned.


JUMP SEARCH ALGORITHM:
--------------------------
For searching an element in a sorted array.
Works by dividing the array into blocks of fixed size and performing a linear search within each block.
These are the steps:
1. Determine the block size to be jumped
	The optimal size of a block to be jumped is determined by sqrt(n) where n is the size of the array.
2. Jump ahead in blocks: Start at the first element. Jump ahead by block size until you find a block where the
	target element is smaller than than the last element of the block.
3. Linear search within the block: Once you find the block where the target element could be,
	perform a linear search within that block.
