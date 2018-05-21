#include<stdio.h>

main() {
   FILE *fp;
   
   fp = fopen("tempWrite.txt", "w+");
   
   fprintf(fp, "Writing to tempWrite.text file using fprintf()\n");
   fputs("Writing to tempWrite.text file using fputs()\n", fp);
   
   fclose(fp);
}

