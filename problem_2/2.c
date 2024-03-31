#include <stdio.h>
#include <stdlib.h>


struct ListNode {
     int val;
     struct ListNode *next;
};

#define TRUE 1
#define FALSE 0
 
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carryover = 0;
    struct ListNode *result = (struct ListNode*)malloc(sizeof(struct ListNode));
    result->val = 0;
    struct ListNode *HeadNode = result;

    while (TRUE) {
        if (l1->next != NULL || l2->next != NULL)
        {
            if (l1 != NULL)
            {
                result->val += l1->val;
            }
            if (l1->next != NULL)
            {
                l1 = l1->next;
            }
            if (l2 != NULL)
            {
                result->val += l2->val;
            }
            if (l2->next != NULL)
            {
                l2 = l2->next;
            }
            //Handling addition
            result->val = carryover;
            if (result->val >= 10) 
            {
                carryover = 1;
                result->val -= 10;
            }
            else 
            {
                carryover = 0;
            }
            struct ListNode *nextNode = (struct ListNode*) malloc(sizeof(struct ListNode));
            result->next = nextNode;
            result = result->next;
        }
        else
        {
            if (carryover == 1)
            {
                struct ListNode *nextNode = (struct ListNode*) malloc(sizeof(struct ListNode));
                result->next = nextNode;
                result = result->next;
                result->val = 1;

            }
            result->next = NULL;

            return HeadNode;
        }
    }
}

int main()
{
    printf("Compiled successfully\n");
}