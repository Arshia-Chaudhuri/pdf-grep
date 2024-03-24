// g++ pdfgrep.cpp -o main
// ./main hi input.pdf

#include "grep.h"
#include <cstdio>
#include <cstring>
#include <stdio.h>
#include <string>

using namespace std;

int main(int ac, char *av[]) {
  if (ac < 3) {
    fprintf(stderr, "A string pattern and a file name are required\n");
    return 1;
  }
  char *pattern = av[1];
  char *pdf_file_name = av[2];
  string pdf_file_name_str = pdf_file_name;
  string str = "python extractText.py " + pdf_file_name_str;
  const char *command = str.c_str();
  FILE *pipe = popen(command, "r");
  if (!pipe)
    return 1;
  // char buffer[128];
  // while (!feof(pipe)) {
  //   if (fgets(buffer, 128, pipe) != NULL) {
  //     printf("%s", buffer);
  //   }
  // }
  pclose(pipe);
  my_grep(pattern);
  //remove("content.txt");
  return 0;
}