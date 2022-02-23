#include <stdio.h>

#include <sys/types.h>

#include <unistd.h>

#include <pthread.h>

 

int mypid, myppid;

void *childThread(void* args){

  printf("The process ID %d\n", mypid);

  printf("The parent ID %d\n", myppid);

  return NULL;

}

int main(){

  int num_prs, gap;

  pthread_t pid;

  printf("How many processes do you want: ");

  scanf("%d", &num_prs);

 
if(fork()==0){


    fork()*num_prs;

 

  gap=pthread_create(&pid, NULL, &childThread, NULL);

  mypid = getpid();

  myppid = getppid();

  if(gap==0){

    pthread_create(&pid, NULL, &childThread, NULL);

  }
}
  return 0;

}
