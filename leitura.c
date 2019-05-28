#include <dirent.h> 
#include <stdio.h> 
#include <stdlib.h>

int main(void) {
  DIR *d;
  char *file;
  struct dirent *dir;

  int i=0;
  char * arq[10];

  d = opendir(".");
  if (d) {
    while ( ((dir = readdir(d)) != NULL) || (i<10) ) {
       arq[i] = (char *)malloc();
       arq[i] = dir->d_name;
       printf("%s",arq[++i]);
    }

    closedir(d);
  }
  return(0);
}