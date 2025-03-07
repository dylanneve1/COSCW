#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <assert.h>

#define checkResults(string, val) {             \
if (val) {                                     \
printf("Failed with %d at %s", val, string); \
exit(1);                                     \
}                                              \
}

#ifdef DISP
  #define DISPLAY(s,n) printf(s,n)
#else
  #define DISPLAY(s,n) {}
#endif

// some low-visibility output
void puff() {
#ifdef PUFF
    printf("        \n");
#else
#endif
}

#include "globals.c"
#include "actions.c"
#include "threads.c"

pthread_t thread1,thread2,thread3,thread4,thread5;

int main(int argc, const char * argv[]) {
    int rc;
    
    #include "showglobals.c"
    
    rc = pthread_create(&thread1,NULL,Thread1,NULL);
    checkResults("pthread_create(1)\n",rc);
    rc = pthread_create(&thread2,NULL,Thread2,NULL);
    checkResults("pthread_create(2)\n",rc);
    rc = pthread_create(&thread3,NULL,Thread3,NULL);
    checkResults("pthread_create(3)\n",rc);
    rc = pthread_create(&thread4,NULL,Thread4,NULL);
    checkResults("pthread_create(4)\n",rc);
    rc = pthread_create(&thread5,NULL,Thread5,NULL);
    checkResults("pthread_create(5)\n",rc);

    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    pthread_join(thread4,NULL);
    pthread_join(thread5,NULL);
    
    
    printf("All threads done\n");
    #include "showglobals.c"
    exit(0);
}

