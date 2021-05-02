#include <stdio.h>
#include "mergeSortedLists.h"

//
Node mergeSortedLists(Node list1, Node list2, ErrorCode* error_code)
{
    Node list=NULL;
    if(list1->x <= list2->x)
        {
            list->x = list1->x;
            list=list1;
            list1=list1->next;
        }
        else 
        {
            list->x = list2->x;
            list=list2;
            list2=list2->next;
        }
    while(list1!=NULL && list2!=NULL)
    {
        if(list1->x <= list2->x)
        {
            list->next=list1->next;
            list1=list1->next;
        }
        else 
        {
            list->next=list2->next;
            list2=list2->next;
        }
    }
    printf(SUCCESS , error_code);   /////////
    return list;
}

