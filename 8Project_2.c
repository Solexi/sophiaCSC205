#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>



int mypid, myppid;
void* POP(void* args)
{
    printf("Pop is a genre that's existed for a long time");
    return NULL;
}

void* RB(void* args)
{
    printf("Rhythm and Blues is a genre that's been praised for just vibes");
    return NULL;
}

void* Folk(void* args)
{
    printf("Folk is basically cute music");
    return NULL;
}

void* Classic(void* args)
{
    printf("Classic is what Disney is trying to be");
    return NULL;
}


int main()
{
    int alpha;
    char name[100];
   
    printf("What's your name: ");
    scanf("%", name);
   
    //loop:
    printf("Hi %s\n, Pick your genre of music: 1. Pop\n 2. Rhythm and Blues\n 3. Folk\n 4. Classic\n", name);
    scanf("%d", &alpha);
   
    pthread_t pop;
    pthread_t rb;
    pthread_t folk;
    pthread_t classic;
   
    if(alpha==1)
    {
        pthread_create(&pop, NULL, &POP, NULL);
        sleep(1);
    }
   
    else if(alpha==2)
    {
        pthread_create(&rb, NULL, &RB, NULL);
        sleep(1);
    }
   
    else if(alpha==3)
    {
        pthread_create(&folk, NULL, &Folk, NULL);
        sleep(1);
    }
   
    else if(alpha==4)
    {
        pthread_create(&classic, NULL, &Classic, NULL);
        sleep(1);
    }
   
    else
    {
        printf("Wrong input. Try again.");
        //goto loop;
    }
    return 0;
}

