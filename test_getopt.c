       #include <unistd.h>
       #include <stdlib.h>
       #include <stdio.h>

       int
       main(int argc, char *argv[])
       {
           int flags, opt;
           int nsecs, tfnd;
	   int is_s = 0;
	   char *string = NULL;

           nsecs = 0;
           tfnd = 0;
           flags = 0;
           while ((opt = getopt(argc, argv, "bi:s:")) != -1) {
               switch (opt) {
               case 'b':
                   flags = 1;
                   break;
               case 'i':
                   nsecs = atoi(optarg);
                   tfnd = 1;
                   break;
	       case 's': is_s=1;
		   string =optarg; 
		   break;
               default: /* '?' */
                   fprintf(stderr, "Usage: %s [-i nsecs] [-b] [-s string] name\n",
                           argv[0]);
                   exit(EXIT_FAILURE);
     }
           }

           printf("B_flag=%d; I_number=%d; S_value=%s;  \n",
                   flags, nsecs, string);

           if (optind >= argc) {
               fprintf(stderr," ");
               exit(EXIT_FAILURE);
           }
           printf("Non-option argument  %s\n", argv[optind]);
           exit(EXIT_SUCCESS);
       }



