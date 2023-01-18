# Problem-Solving
## Topic:  Binary Tree
 * Non-inear data structure
<p> The Binary tree means that the node can have maximum two children. Here, binary name itself suggests that 'two'; therefore, each node can have either 0, 1 or 2 children.</p>
 
 

<img src="https://user-images.githubusercontent.com/90498811/210308423-dc1fed1a-c125-4d67-8152-1f46d36c25b9.png" width="100">
--> The above tree is a binary tree because each node contains the utmost two children. The logical representation of the above tree is given below:
<img src="https://user-images.githubusercontent.com/90498811/210308169-99ba262f-9ab5-4620-bc66-50da6f5b6e9f.png" width="200">
 
## Topic: Bit Manipulation Algorithms
A bitwise operator is a character representing an action that works on data at the bit level rather than with bytes or larger units of data.
Bitwise operators can make some code faster and more efficient. Examples of uses of bitwise operations include encryption, compression, graphics, communications over ports/sockets, embedded systems programming and finite state machines.

Example-1: Swapping
#include <stdio.h>

int main() {
    int i = 65;
    int k = 120;
    printf(" value of i=%d k=%d before swapping", i, k);

    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("value of i=%d k=%d after swapping", i, k);

    return 0;
}

