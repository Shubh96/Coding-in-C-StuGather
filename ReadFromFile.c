#include <stdio.h>

main() {

   FILE *fp;
   char ch; char reader[255];

   fp = fopen("tempWrite.txt", "r");
   
   /*while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);*/
    
    while (fgets(reader, 255, fp) != NULL)
        printf("%s", reader);
        
   fclose(fp);
}
