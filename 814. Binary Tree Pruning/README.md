**814. Binary Tree Pruning**

**LINK** - https://leetcode.com/problems/binary-tree-pruning/

![image](https://user-images.githubusercontent.com/92528845/188722637-1a9b4be5-3d9d-4829-aae9-7277b1fc5127.png)



Given the root of a binary tree, return the same tree where every subtree (of the given tree) not containing a 1 has been removed.

A subtree of a node node is node plus every node that is a descendant of node.


Example 1:

Input: root = [1,null,0,0,1]

Output: [1,null,0,null,1]


Example 2:

Input: root = [1,0,1,0,0,0,1]

Output: [1,null,1,null,1]


Example 3:

Input: root = [1,1,0,1,1,0,1,0]

Output: [1,1,0,1,1,null,1]
 

Constraints:

The number of nodes in the tree is in the range [1, 200].
Node.val is either 0 or 1.
