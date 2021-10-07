# WORKING WITH LINKED LIST.

A linked list _is a way to store a collection of elements._

In linked list, we have node which is a collection of two sub-elements or parts.
_a data part that stores the element and a next part that storesthe link to the next node_

## REQUIREMENTS FOR PROJECT

To work on a **linked list** project, one must have general understanding of;

1. **Pointer**
    
    A pointer is a variable that stores the address of another variable.
    In _linked list_ we use pointer to point to the next node.

2. **Malloc**
    
    As you know, a malloc simply allocates memory dinymically, and here we use it to allocate memeory for our list.

    For example:
    
    struct node *head, *tail

    head = (struct node *) malloc(sizeof(struct node));

3. **Structure, typedef**
      
    In linked list, structre is used unlike in array where same data type is stored.
    
    We define structure and link to the list.

    typedef struct node
    {
      char *ptr;
      unsigned int n;
      struct node *next;
    }

    where *next is the pointer to the next node.

4. **Program flow and loops**

## PROJECT FILES

#### lists.h

This is the header file that contains all the prototypes for my functions.

#### 0-print_list.c

Contains a function that prints all the elements of a list_t list.

Return: the number of nodes.

#### 1-list_len.c

Contains a function that returns the number of elements in t a linked list_t list.

#### 2-add_node.c

Contains a function that adds a new node at the beginning of a list_t list.

#### 3-add_node_end.c

Contains a function that add a new node at the end of a list_t list.

#### 4-free_list.c

Contains a function that frees a list_t list.

***ALL THE ABOVE FILES ARE FOR MANDATORY TASKS***



****DONE BY****

*_MOSES OYET DAVID_*

****AT ALX****
