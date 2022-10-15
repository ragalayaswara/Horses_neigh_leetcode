# Horses_neigh_leetcode
In real world horses neigh, and you can count them by listening to them.

For this problem you will be given an input string consisting of lowercases letters which represents combination of neigh of different horses.

You need to return an integer corresponding to minimum number of distinct horses which can produce the given sequence.

If the input string is not a combination of valid neigh from different horses return -1.

Example :

Input : "nei"
Output : -1
Explanation: Not a valid neigh.
Input : "neighneigh"
Output : 1
Explanation: Single horse yelling neigh two times.
Input : "neingeighh"
Output : 2
Explanation: Second horse can be seen speaking before the first one finished.
