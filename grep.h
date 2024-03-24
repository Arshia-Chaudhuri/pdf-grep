#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

int my_grep(char *pattern) {
  char lineBuffer[1000];
  FILE *fp = NULL;
  int count = 0;
  string file_name = "content.txt";
  const char *file_name_c = file_name.c_str();
  fp = fopen(file_name_c, "r");
  if (!fp) {
    fprintf(stderr, "Error - unable to open %s\n", file_name_c);
    return 2;
  }

  while (fgets(lineBuffer, 1000, fp)) {
    if (strstr(lineBuffer, pattern)) {
      printf("%s", lineBuffer);
      ++count;
    }
  }
  fclose(fp);
  printf("\nfound %d occurrences\n", count);
  return 0;
}