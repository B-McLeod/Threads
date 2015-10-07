#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <vector
//#include <semaphore.h>

//sem_t mutex;
void *threadFunction(void *arg);
void *bitShift(uint32_t number);

int main(void)
{
    pthread_t pth; // this is our thread identifier
    int i = 0;

    /* Create worker thread */
    pthread_create(&pth, NULL, threadFunction, "processing...");

    /* Wait for our thread to finish before continuing */
    pthread_join(pth, NULL /* void ** return value could go here */);

    while (i < 10)
    {
        usleep(1);
        printf("main() is running...\n");
        ++i;
    }

    return 0;
}

void *threadFunction(void *arg)
{
    char *str;
    int i = 0;

    str = (char*)arg;

    while (i < 10)
    {
        usleep(1);
        printf("threadFunction says: %s\n", str);
        ++i;
    }

    return NULL;
}

void *bitShift(uint32_t number)
{
    unsigned int a = 100;
    vector<unsigned int> l;

    int i;
    for (i = 0; i < 32; i++)
    {
        int C = a << (32 - i);
        int K = (a >> i) | C;
        l.push_back(K);
    }
}