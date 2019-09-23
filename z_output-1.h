#ifndef Z_OUTPUT_H
#define Z_OUTPUT_H

// Author : Fannie Barskhian
// Class : Data Structures
// Project : Stack and Queue

/**


TESTING STACK FUNCTIONS
Push: {0} [ 0 ] -> |||

Push: {5} [ 5 ]-> [ 0 ] -> |||

Push: {10} [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Push: {15} [ 15 ]-> [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Push: {20} [ 20 ]-> [ 15 ]-> [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Push: {25} [ 25 ]-> [ 20 ]-> [ 15 ]-> [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Push: {30} [ 30 ]-> [ 25 ]-> [ 20 ]-> [ 15 ]-> [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Push: {35} [ 35 ]-> [ 30 ]-> [ 25 ]-> [ 20 ]-> [ 15 ]-> [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Push: {40} [ 40 ]-> [ 35 ]-> [ 30 ]-> [ 25 ]-> [ 20 ]-> [ 15 ]-> [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Top of the Stack = 40
Is the List Empty? No. Test PASSED.

Pop : {40} [ 35 ]-> [ 30 ]-> [ 25 ]-> [ 20 ]-> [ 15 ]-> [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Pop : {35} [ 30 ]-> [ 25 ]-> [ 20 ]-> [ 15 ]-> [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Pop : {30} [ 25 ]-> [ 20 ]-> [ 15 ]-> [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Pop : {25} [ 20 ]-> [ 15 ]-> [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Pop : {20} [ 15 ]-> [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Pop : {15} [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Pop : {10} [ 5 ]-> [ 0 ] -> |||

Pop : {5} [ 0 ] -> |||

Pop : {0} You Are Attempting to Print an Empty List

Is the List Empty? Yes. Test PASSED.

Stack # 1 : [ 40 ]-> [ 35 ]-> [ 30 ]-> [ 25 ]-> [ 20 ]-> [ 15 ]-> [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Stack # 2 :[ 42 ]-> [ 35 ]-> [ 28 ]-> [ 21 ]-> [ 14 ]-> [ 7 ]-> [ 0 ] -> |||

Testing Assignment Operator Stack 2 = Stack 1: [ 40 ]-> [ 35 ]-> [ 30 ]-> [ 25 ]-> [ 20 ]-> [ 15 ]-> [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Popping Stack 1 then Printing Stack 1 and 2 to see if Assignment Operator is legit
Stack # 1 : [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Stack # 2 :[ 40 ]-> [ 35 ]-> [ 30 ]-> [ 25 ]-> [ 20 ]-> [ 15 ]-> [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

Testing Copy Constructor ----- Stack<int> stack3 = stack; Stack # 1 : [ 10 ] -> |||

Stack # 3 :[ 10 ] -> |||

Popping Stack 1 then Printing Stack 1 and 3 to see if Copy Constructor is legit
Stack # 1 : You Are Attempting to Print an Empty List

Stack # 3 :[ 10 ] -> |||

Testing Stack Iterator and Moving it Through the Stack using it++
[ 40 ]-> [ 35 ]-> [ 30 ]-> [ 25 ]-> [ 20 ]-> [ 15 ]-> [ 10 ]-> [ 5 ]-> [ 0 ] -> |||

40
35
30
25
Testing Stack Iterator Last Node Function
0

TESTING QUEUE FUNCTIONS
Push: {0} [ 0 ] -> |||

Push: {5} [ 0 ]-> [ 5 ] -> |||

Push: {10} [ 0 ]-> [ 5 ]-> [ 10 ] -> |||

Push: {15} [ 0 ]-> [ 5 ]-> [ 10 ]-> [ 15 ] -> |||

Push: {20} [ 0 ]-> [ 5 ]-> [ 10 ]-> [ 15 ]-> [ 20 ] -> |||

Push: {25} [ 0 ]-> [ 5 ]-> [ 10 ]-> [ 15 ]-> [ 20 ]-> [ 25 ] -> |||

Push: {30} [ 0 ]-> [ 5 ]-> [ 10 ]-> [ 15 ]-> [ 20 ]-> [ 25 ]-> [ 30 ] -> |||

Push: {35} [ 0 ]-> [ 5 ]-> [ 10 ]-> [ 15 ]-> [ 20 ]-> [ 25 ]-> [ 30 ]-> [ 35 ] -> |||

Push: {40} [ 0 ]-> [ 5 ]-> [ 10 ]-> [ 15 ]-> [ 20 ]-> [ 25 ]-> [ 30 ]-> [ 35 ]-> [ 40 ] -> |||

Front of the Queue = 0
Is the Queue Empty? No. Test PASSED.

Pop : {0} [ 5 ]-> [ 10 ]-> [ 15 ]-> [ 20 ]-> [ 25 ]-> [ 30 ]-> [ 35 ]-> [ 40 ] -> |||

Pop : {5} [ 10 ]-> [ 15 ]-> [ 20 ]-> [ 25 ]-> [ 30 ]-> [ 35 ]-> [ 40 ] -> |||

Pop : {10} [ 15 ]-> [ 20 ]-> [ 25 ]-> [ 30 ]-> [ 35 ]-> [ 40 ] -> |||

Pop : {15} [ 20 ]-> [ 25 ]-> [ 30 ]-> [ 35 ]-> [ 40 ] -> |||

Pop : {20} [ 25 ]-> [ 30 ]-> [ 35 ]-> [ 40 ] -> |||

Pop : {25} [ 30 ]-> [ 35 ]-> [ 40 ] -> |||

Pop : {30} [ 35 ]-> [ 40 ] -> |||

Pop : {35} [ 40 ] -> |||

Pop : {40} You Are Attempting to Print an Empty List

Is the Queue Empty? Yes. Test PASSED.

Queue # 1 : [ 0 ]-> [ 5 ]-> [ 10 ]-> [ 15 ]-> [ 20 ]-> [ 25 ]-> [ 30 ]-> [ 35 ]-> [ 40 ] -> |||

Queue # 2 :[ 0 ]-> [ 7 ]-> [ 14 ]-> [ 21 ]-> [ 28 ]-> [ 35 ]-> [ 42 ] -> |||

Testing Assignment Operator Queue 2 = Queue 1: [ 0 ]-> [ 5 ]-> [ 10 ]-> [ 15 ]-> [ 20 ]-> [ 25 ]-> [ 30 ]-> [ 35 ]-> [ 40 ] -> |||

Popping Queue 1 then Printing Queue 1 and 2 to see if Assignment Operator is legit
Queue # 1 : [ 30 ]-> [ 35 ]-> [ 40 ] -> |||

Queue # 2 :[ 0 ]-> [ 5 ]-> [ 10 ]-> [ 15 ]-> [ 20 ]-> [ 25 ]-> [ 30 ]-> [ 35 ]-> [ 40 ] -> |||

Testing Copy Constructor ----- Queue<int> queue3 = queue;
Queue # 1 : [ 30 ] -> |||

Queue # 3 :[ 30 ] -> |||

Popping Queue 1 then Printing Queue1 and 3 to see if Copy Constructor is legit
Queue # 1 : You Are Attempting to Print an Empty List

Queue # 3 :[ 30 ] -> |||

Testing Queue Iterator and Moving it Through the Queue using it++
[ 0 ]-> [ 5 ]-> [ 10 ]-> [ 15 ]-> [ 20 ]-> [ 25 ]-> [ 30 ]-> [ 35 ]-> [ 40 ] -> |||

0
5
10
15
Testing Queue Iterator Last Node Function
40

Creating a Linked List Using The Insert Head Function from 0 to 100 in increments of 10
[ 90 ]-> [ 80 ]-> [ 70 ]-> [ 60 ]-> [ 50 ]-> [ 40 ]-> [ 30 ]-> [ 20 ]-> [ 10 ]-> [ 0 ] -> |||


//======================================================================

Creating a short Linked List for INIT_HEAD Testing Purposes
[ 20 ]-> [ 10 ]-> [ 0 ] -> |||

Initializing Head of List to Null and Attempting to Print
You Are Attempting to Print an Empty List

//======================================================================
 Creating a short Linked List  for DELETE ALL Testing Purposes
[ 4 ]-> [ 3 ]-> [ 2 ]-> [ 1 ]-> [ 0 ] -> |||

Running Delete All Function
Attempting to Print Now
You Are Attempting to Print an Empty List


//======================================================================
 Creating a shorter Linked List for EMPTY Testing Purposes
Testing if this is empty -> [ 1 ]-> [ 0 ] -> |||

PASSED

//======================================================================
Testing Copy Function:
List # 1 [ 40 ]-> [ 30 ]-> [ 20 ]-> [ 10 ]-> [ 0 ] -> |||


List # 2 [ 48 ]-> [ 44 ]-> [ 40 ]-> [ 36 ]-> [ 32 ]-> [ 28 ]-> [ 24 ]-> [ 20 ]-> [ 16 ]-> [ 12 ]-> [ 8 ]-> [ 4 ]-> [ 0 ] -> |||

Making List 2 = List 1 using the copy function
List # 2 [ 40 ]-> [ 30 ]-> [ 20 ]-> [ 10 ]-> [ 0 ] -> |||


//======================================================================

**/

#endif // Z_OUTPUT_H
