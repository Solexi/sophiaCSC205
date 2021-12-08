#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <windows.h>


char oprcha[5];
void *operationsThread(void *oprtn)
{ 
    int *op_tid = (int *)oprtn;
    printf("Thread ID: %d, Operation: %s\n", *, oprcha);
    pthread_exit(NULL);
}

int main()
{
    int i;
    int N;
    printf("Enter the amount of operations you would like to monitor: ")
    scanf("")
    pthread_t th_id1, th_id2, th_id3, th_id4, th_id5, th_id6/*, th_id7, th_id8, th_id9, th_id10, th_id11, th_id12*/;
    //printf("Please how many operations would you like to monitor");
    //scanf("%d",N);
    for (i=0 ; i < 3; i++)
    {
        if (i<1)
        {
            printf("Enter operation: \n");
            scanf("%[^\n]%*c", &oprcha);
            pthread_create(&th_id1, NULL, operationsThread, (void *)&th_id1); 
            pthread_create(&th_id2, NULL, operationsThread, (void *)&th_id2);
            pthread_join(th_id1, NULL);
            pthread_join(th_id2, NULL);
            continue;
        }
        if (i<2)
        {
            printf("Enter operation: \n");
            scanf("%[^\n]%*c", &oprcha);
            pthread_create(&th_id1, NULL, operationsThread, (void *)&th_id1); 
            pthread_create(&th_id2, NULL, operationsThread, (void *)&th_id2);
            pthread_create(&th_id3, NULL, operationsThread, (void *)&th_id3);
            pthread_create(&th_id4, NULL, operationsThread, (void *)&th_id4);
            pthread_join(th_id1, NULL);
            pthread_join(th_id2, NULL);
            pthread_join(th_id3, NULL);
            pthread_join(th_id4, NULL);
            continue;
        }
        if (i<3)
        {
            printf("Enter operation: \n");
            scanf("%[^\n]%*c", &oprcha);
            pthread_create(&th_id1, NULL, operationsThread, (void *)&th_id1); 
            pthread_create(&th_id2, NULL, operationsThread, (void *)&th_id2);
            pthread_create(&th_id3, NULL, operationsThread, (void *)&th_id3);
            pthread_create(&th_id4, NULL, operationsThread, (void *)&th_id4);
            pthread_create(&th_id5, NULL, operationsThread, (void *)&th_id5);
            pthread_create(&th_id6, NULL, operationsThread, (void *)&th_id6);
            pthread_join(th_id1, NULL);
            pthread_join(th_id2, NULL);
            pthread_join(th_id3, NULL);
            pthread_join(th_id4, NULL);
            pthread_join(th_id5, NULL);
            pthread_join(th_id6, NULL);
            continue;
        }
        
        //scanf("%[^\n]s", &oprcha); sets the delimiter...
        /*printf("Enter operation: \n");
        scanf("%[^\n]%*c", &oprcha);
        pthread_create(&th_id1, NULL, operationsThread, (void *)&th_id1); 
        pthread_create(&th_id2, NULL, operationsThread, (void *)&th_id2);
        pthread_join(th_id1, NULL);
        pthread_join(th_id2, NULL);*/
    }
        pthread_exit(NULL);  

    return 0;
}


