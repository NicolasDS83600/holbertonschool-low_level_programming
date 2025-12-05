# Project : C - Doubly Linked Lists

This project introduces the concept and implementation of doubly linked lists in C.
It covers how nodes are created, linked together in both directions, traversed forwards and backwards, and properly freed from memory.
The project is part of the Holberton School curriculum and focuses on understanding dynamic data structures, memory management, and pointer manipulation.

There are nine tasks to complete in this project. Below is a brief summary of their objectives, an explanation of how they work,
and a description of the header file used to define the list structure and function prototypes.

## 1. 0-print_dlistint.c

<u>Objective:</u>

Write a function that prints all the elements of a dlistint_t list.

Prototype to use: size_t print_dlistint(const dlistint_t *h);

    * Return: the number of nodes
    * Format: see example

<u>Explanation of the function:</u>

The print_dlistint function goes through a doubly linked list of type dlistint_t and prints each number stored in the nodes.
It uses a separate pointer called runner so the original head pointer isn’t changed.
As it moves from one node to the next using the next pointer, it prints the value found in the n field of each node and increases a counter.
When it reaches the end of the list, it returns the total number of nodes it has printed. If the list is empty, the function simply returns 0.

The flowchart below illustrates the main steps and logic of the function.

![0-print_dlistint.png](assets/0-print_dlistint.png)

## 2. 1-dlistint_len.c

<u>Objective:</u>

Write a function that returns the number of elements in a linked dlistint_t list.

Prototype to use: size_t dlistint_len(const dlistint_t *h);

<u>Explanation of the function:</u>

The dlistint_len function counts how many nodes are in a doubly linked list of type dlistint_t.
It uses a pointer called runner to move through the list without changing the original head pointer. For each node it reaches, it increases a counter by one.
The function continues following the next pointers until it reaches the end of the list. When there are no more nodes, it returns the total count. If the list is empty, it returns 0.

The flowchart below illustrates the main steps and logic of the function.

![1-dlistint_len.png](assets/1-dlistint_len.png)

## 3. 2-add_dnodeint.c

<u>Objective:</u>

Write a function that adds a new node at the beginning of a dlistint_t list.

Prototype to use: dlistint_t *add_dnodeint(dlistint_t **head, const int n);

    * Return: the address of the new element, or NULL if it failed

<u>Explanation of the function:</u>

The add_dnodeint function adds a new node to the beginning of a doubly linked list. It first allocates memory for the node and returns NULL if this fails.
The new node is filled with the value n, its prev pointer is set to NULL, and its next pointer is set to the current head.
If the list already has elements, the old head’s prev pointer is updated to point to the new node.
Then the head pointer is updated so the new node becomes the first node, and the function returns the new node’s address.

The flowchart below illustrates the main steps and logic of the function.

![](assets/)

## 4. 3-add_dnodeint_end.c

<u>Objective:</u>

Write a function that adds a new node at the end of a dlistint_t list.

Prototype to use: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

    * Return: the address of the new element, or NULL if it failed

<u>Explanation of the function:</u>

The add_dnodeint_end function adds a new node to the end of a doubly linked list. It first allocates memory for the new node and returns NULL if it fails.
The node is filled with the value n and its next pointer is set to NULL. If the list is empty, the new node becomes the head and its prev pointer is set to NULL.
Otherwise, the function moves through the list using a runner pointer until it reaches the last node,
then links the new node after it and sets the new node’s prev pointer to the last node. The function returns the address of the new node.

The flowchart below illustrates the main steps and logic of the function.

![](assets/)

## 5. 4-free_dlistint.c

<u>Objective:</u>

Write a function that frees a dlistint_t list.

Prototype to use: void free_dlistint(dlistint_t *head);

<u>Explanation of the function:</u>

The free_dlistint function releases all the memory used by a doubly linked list. It moves through the list using a temporary pointer called runner, freeing each node one by one. After each node is freed, the function moves to the next one until the entire list has been deallocated.

The flowchart below illustrates the main steps and logic of the function.

![](assets/)

## 6. 5-get_dnodeint.c

<u>Objective:</u>

Write a function that returns the nth node of a dlistint_t linked list.

Prototype to use: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

    * where index is the index of the node, starting from 0
    * if the node does not exist, return NULL

<u>Explanation of the function:</u>

The get_dnodeint_at_index function returns the node found at a specific position in a doubly linked list. Starting from the head, it moves through the list with a runner pointer while keeping a counter. When the counter matches the requested index, the function returns that node. If it reaches the end of the list without finding the index, it returns NULL.

The flowchart below illustrates the main steps and logic of the function.

![](assets/)

## 7. 6-sum_dlistint.c

<u>Objective:</u>

Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

Prototype to use: int sum_dlistint(dlistint_t *head);

    * if the list is empty, return 0

<u>Explanation of the function:</u>

The sum_dlistint function calculates the total of all the integer values stored in a doubly linked list. Starting from the head, it goes through each node, adds the node’s n value to a running sum, and then moves to the next node. When it reaches the end of the list, it returns the final sum.

The flowchart below illustrates the main steps and logic of the function.

![](assets/)

## 8. 7-insert_dnodeint.c

<u>Objective:</u>

Write a function that inserts a new node at a given position.

Prototype to use: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

    * where idx is the index of the list where the new node should be added. Index starts at 0
    * Returns: the address of the new node, or NULL if it failed
    * if it is not possible to add the new node at index idx, do not add the new node and return NULL

<u>Explanation of the function:</u>

The insert_dnodeint_at_index function adds a new node at a specific position in a doubly linked list. It first allocates memory for the node and stores the value n, returning NULL if allocation fails or the head pointer is invalid. If the index is 0, the node is added at the start, updating the head and the old first node’s prev pointer if necessary. Otherwise, the function moves through the list to the node just before the target index. If that node exists, the new node is inserted after it, with prev and next pointers adjusted accordingly. If the index is out of range, the function frees the node and returns NULL.

The flowchart below illustrates the main steps and logic of the function.

![](assets/)

## 9. 8-delete_dnodeint.c

<u>Objective:</u>

Write a function that deletes the node at index index of a dlistint_t linked list.

Prototype to use: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

    * where index is the index of the node that should be deleted. Index starts at 0
    * Returns: 1 if it succeeded, -1 if it failed

<u>Explanation of the function:</u>

The delete_dnodeint_at_index function removes the node at a given position in a doubly linked list. It first checks if the list exists. If the index is 0, it updates the head to the next node and adjusts the new head’s prev pointer if needed, then frees the old head. For other indices, it moves through the list to the target node. If the node exists, its neighbors’ next and prev pointers are updated to bypass it, and the node is freed. The function returns 1 on success and -1 if the index is out of range or the list is empty.

The flowchart below illustrates the main steps and logic of the function.

![](assets/)

## 10. lists.h

This lists.h file defines a doubly linked list node structure (dlistint_t) with an integer value and pointers to the previous and next nodes. It also declares functions to manipulate the list, including printing, counting, adding, inserting, deleting, summing, accessing nodes by index, and freeing the list, so they can be used in any C file that includes this header.
