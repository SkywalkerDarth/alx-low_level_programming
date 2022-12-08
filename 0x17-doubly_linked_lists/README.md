Doubly Linked List

Resources
Read or watch:

What is a Doubly Linked List
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

More Info
Please use this data structure for this project:

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
