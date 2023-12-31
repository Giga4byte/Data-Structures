# include <stdio.h>

int Q [100];
int front =-1, rear =-1;
int n, item;

void enqueue (int item)
{
    if (rear==n-1)
    { printf("Queue is full\n"); }
    else
    { rear = rear+1;
      Q[rear] = item; 
      printf("Enqueued %d onto the queue.\n", item); }
}

void dequeue ()
{
    if (front == rear)
    { printf("Queue is empty\n");
      //resetting the queue pointers to -1
      front = -1;
      rear = -1; }
    else
    { front = front+1;
      item = Q[front];
      printf("Dequeued %d from the queue.\n", item); }
}

void display() {
    if (front == rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements\n");
        for (int i = front+1; i <= rear; i++) {
            printf("%d\n", Q[i]);
        }
    }
}

void main () {
    int choice;
    
    printf("Enter the number of max elements: ");
    scanf ("%d",&n);
    
    printf ("\nMENU:\n1. Enqueue\n2. Dequeue\n3. Display\n4. Break\n");
    
    while (1)
    {
        printf ("Enter the choice: ");
        scanf ("%d",&choice);
        switch (choice)
        {
            case 1:
            {
                printf("Enter the element to enqueue: ");
                scanf ("%d",&item);
                enqueue (item);
                break;
            } // case 1
            
            case 2:
            {
                dequeue ();
                break;
            } // case 2
            
            case 3:
            {
                display ();
                break;
            } // case 3
            
            case 4:
            {
                printf ("Terminating.\n");
                return 0;
            } // case 4
            
            default:
            {
                printf ("Invalid choice!\n");
            }
        } // switch
    } // while
}
