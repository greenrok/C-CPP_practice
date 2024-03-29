#include <stdio.h>
#include "DequeBaseQueue.h"

int main()
{
   Queue q;
   QueueInit(&q);

   Enqueue(&q, 1);
   Enqueue(&q, 2);
   Enqueue(&q, 3);
   Enqueue(&q, 4);
   Enqueue(&q, 5);

   printf("QPeek 데이터 확인 : %d \n", QPeek(&q));

   while (!QIsEmpty(&q))
   {
      printf("%d ", Dequeue(&q));
   }
   printf("\n");

   return 0;
}