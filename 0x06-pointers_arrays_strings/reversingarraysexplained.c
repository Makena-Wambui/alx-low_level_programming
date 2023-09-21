
int arr[] = {1, 2, 3, 4, 5};
And we want to reverse the elements of this array using the reverse_array function. Here's how it works step by step:

Initial array: 1 2 3 4 5
n is the number of elements in the array, which is 5.
Now, let's go through the reverse_array function with this example:

s = 0:

t is set to a[0], which is 1.
a[0] is set to a[5 - 1 - 0], which is a[4], so it becomes 5.
a[4] is set to t, which is 1.
Updated array: 5 2 3 4 1

s = 1:

t is set to a[1], which is 2.
a[1] is set to a[5 - 1 - 1], which is a[3], so it becomes 4.
a[3] is set to t, which is 2.
Updated array: 5 4 3 2 1

s = 2:

t is set to a[2], which is 3.
a[2] is set to a[5 - 1 - 2], which is a[2], so it remains 3.
a[2] is set to t, which is 3.
The array remains the same: 5 4 3 2 1

The loop continues to s = 3 and s = 4, but at this point, the entire array is already reversed. So, the function completes, and the final reversed array is:

Reversed array: 5 4 3 2 1
The reverse_array function successfully reversed the elements of the original array in-place.





