#include <stdbool.h>


typedef struct node_t {
 int x;
 struct node_t *next;
} *Node;

typedef enum {
 SUCCESS=0,
 MEMORY_ERROR,  
 UNSORTED_LIST,
 NULL_ARGUMENT,
} ErrorCode;

int getListLength(Node list);
bool isListSorted(Node list);
Node mergeSortedLists(Node list1, Node list2, ErrorCode* error_code);
