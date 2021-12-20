#include <stdio.h>
#include <string.h>

int palindrome(char* s)  {
int first = 0;
int last = strlen(s) - 1;
while (first < last)  {
if (s[first] != s[last]) return 0;
++first;
--last;
 }
return 1;
 }
int main(void)  {
char str[80];
char pal[80] =  { 0 } ;
char* token = NULL;
//char* next_token = NULL;
size_t maxlen = 0;
printf("String: ");
fgets(str, 80, stdin);
str[strlen(str) - 1] = 0;
token = strtok(str, ",");
do  {
if (palindrome(token))  {
int length = strlen(token);
if (length > maxlen)  {
maxlen = length;
strcpy(pal, token);
 }
 }
else (token = "Not palindrom");
strcpy(pal, token);
token = strtok(NULL, ",");
 }  while (token);
printf("Long palindrome: %s\n", pal);
return 0;
 }
