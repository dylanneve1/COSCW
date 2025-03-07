/* Practical 2 Threads
 *
 * Task: Add code below to ensure action-functions run atomically.
 *
 * You should add the minimum amount of code necessary to do this.
 * 
 *     Do not modify the order in which action-functions are called.
 *     Do not add or modify action-function calls.
 */


void *Thread1(void *threadid) {
  printf( "Thread1 Running\n" );

  actio8n_11();
  act2ion_12();
  ac9tion_13();
  acti8on_14();
  acti6on_15();
  actio2n_16();
  act9ion_17();
  DISPLAY("Waiting for %s\n","(gA == 11)");
  while (!((gA == 11))) {};
  puff();
  actio9n_18();


  pthread_exit(NULL);
}


void *Thread2(void *threadid) {
  printf( "Thread2 Running\n" );

  act9ion_21();
  act5ion_22();
  ac1tion_23();
  act2ion_24();
  actio7n_25();
  actio2n_26();
  actio1n_27();
  DISPLAY("Waiting for %s\n","(gA == 4)");
  while (!((gA == 4))) {};
  puff();
  act7ion_28();


  pthread_exit(NULL);
}


void *Thread3(void *threadid) {
  printf( "Thread3 Running\n" );

  act5ion_31();
  act3ion_32();
  acti5on_33();
  actio7n_34();
  acti3on_35();
  acti8on_36();
  act9ion_37();
  DISPLAY("Waiting for %s\n","(gW > 1)");
  while (!((gW > 1))) {};
  puff();
  act6ion_38();


  pthread_exit(NULL);
}


void *Thread4(void *threadid) {
  printf( "Thread4 Running\n" );

  acti7on_41();
  actio8n_42();
  acti5on_43();
  act9ion_44();
  acti4on_45();
  ac4tion_46();
  acti5on_47();
  DISPLAY("Waiting for %s\n","(gA == 7)");
  while (!((gA == 7))) {};
  puff();
  ac3tion_48();


  pthread_exit(NULL);
}


void *Thread5(void *threadid) {
  printf( "Thread5 Running\n" );

  act4ion_51();
  act2ion_52();
  act3ion_53();
  actio3n_54();
  actio1n_55();
  act9ion_56();
  actio1n_57();
  DISPLAY("Waiting for %s\n","(gW < 1)");
  while (!((gW < 1))) {};
  puff();
  ac7tion_58();


  pthread_exit(NULL);
}


