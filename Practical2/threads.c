/* Practical 2 Threads
 *
 * Task: Add code below to ensure action-functions run atomically.
 *
 * You should add the minimum amount of code necessary to do this.
 * 
 *     Do not modify the order in which action-functions are called.
 *     Do not add or modify action-function calls.
 */

// Mutex for synchronizing access to global variables
pthread_mutex_t global_mutex = PTHREAD_MUTEX_INITIALIZER;

// Condition variables for gJ and gQ 
pthread_cond_t condJ = PTHREAD_COND_INITIALIZER;
pthread_cond_t condQ = PTHREAD_COND_INITIALIZER;

void *Thread1(void *threadid) {
  printf( "Thread1 Running\n" );

  // Lock the global mutex
  pthread_mutex_lock(&global_mutex);

  act4ion_11();
  actio6n_12();
  acti6on_13();
  act2ion_14();
  actio6n_15();
  acti3on_16();
  acti7on_17();
  DISPLAY("Waiting for %s\n","(gJ == 7)");
  while (!((gJ == 7))) {
    pthread_cond_wait(&condJ, &global_mutex);
  };
  puff();
  act1ion_18();

  // Signal to other threads waiting on condJ
  pthread_cond_signal(&condJ);
  // Unlock the global mutex
  pthread_mutex_unlock(&global_mutex);

  pthread_exit(NULL);
}


void *Thread2(void *threadid) {
  printf( "Thread2 Running\n" );

  // Lock the global mutex
  pthread_mutex_lock(&global_mutex);

  actio9n_21();
  ac8tion_22();
  actio8n_23();
  actio5n_24();
  acti6on_25();
  acti4on_26();
  acti6on_27();
  DISPLAY("Waiting for %s\n","(gJ == 4)");
  while (!((gJ == 4))) {
    pthread_cond_wait(&condJ, &global_mutex);
  };
  puff();
  act7ion_28();

  // Signal to other threads waiting on condJ
  pthread_cond_signal(&condJ);
  // Unlock the global mutex
  pthread_mutex_unlock(&global_mutex);

  pthread_exit(NULL);
}


void *Thread3(void *threadid) {
  printf( "Thread3 Running\n" );

  // Lock the global mutex
  pthread_mutex_lock(&global_mutex);

  acti2on_31();
  act6ion_32();
  act7ion_33();
  act2ion_34();
  ac4tion_35();
  act8ion_36();
  acti6on_37();
  DISPLAY("Waiting for %s\n","(gJ == 11)");
  while (!((gJ == 11))) {
    pthread_cond_wait(&condJ, &global_mutex);
  };
  puff();
  ac9tion_38();

  // Signal to other threads waiting on condJ
  pthread_cond_signal(&condJ);
  // Unlock the global mutex
  pthread_mutex_unlock(&global_mutex);

  pthread_exit(NULL);
}


void *Thread4(void *threadid) {
  printf( "Thread4 Running\n" );

  // Lock the global mutex
  pthread_mutex_lock(&global_mutex);

  acti7on_41();
  acti5on_42();
  ac7tion_43();
  acti1on_44();
  acti7on_45();
  acti4on_46();
  act3ion_47();
  DISPLAY("Waiting for %s\n","(gQ < 1)");
  while (!((gQ < 1))) {
    pthread_cond_wait(&condQ, &global_mutex);
  };
  puff();
  act7ion_48();

  // Signal to other threads waiting on condQ
  pthread_cond_signal(&condQ);
  // Unlock the global mutex
  pthread_mutex_unlock(&global_mutex);

  pthread_exit(NULL);
}


void *Thread5(void *threadid) {
  printf( "Thread5 Running\n" );

  // Lock the global mutex
  pthread_mutex_lock(&global_mutex);

  actio3n_51();
  ac6tion_52();
  actio4n_53();
  act7ion_54();
  actio3n_55();
  act6ion_56();
  actio6n_57();
  DISPLAY("Waiting for %s\n","(gQ > 1)");
  while (!((gQ > 1))) {
    pthread_cond_wait(&condQ, &global_mutex);
  };
  puff();
  acti8on_58();

  // Signal to other threads waiting on condQ
  pthread_cond_signal(&condQ);
  // Unlock the global mutex
  pthread_mutex_unlock(&global_mutex);

  pthread_exit(NULL);
}


