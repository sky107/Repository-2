#include <stdio.h>
#include<pthread.h>
#include <semaphore.h>
#include <unistd.h>
sem_t mutex;
int a=1,b=2,c=3;
void *thread(void *arg){
    int *p=(int*)arg;
    sem_wait(&mutex);
    printf("Enter%d\n",*p);
    sleep(5);
    printf("exit%d\n",*p);
    sem_post(&mutex);
}

int main()
{
   sem_init(&mutex,0,1);//sharing withing htress '0' initial value 1;
   pthread_t t1,t2;
   pthread_create(&t1,NULL,thread,&a);//atributes null //parameter NULL
   pthread_create(&t2,NULL,thread,&b); 
    //termination
   pthread_join(t1,NULL);
   pthread_join(t2,NULL);
   sem_destroy(&mutex);
   return 0;
}
