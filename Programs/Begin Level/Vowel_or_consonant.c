#include <stdio.h>

int main(void) 
{
  char ch;
  scanf("%c", &ch);
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' &&ch <= 'Z')) {
    if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch== 'u' || ch=='U')
      printf("Vowel");
    else
      printf("Consonant");
  }
  else
    printf("%c is neither a vowel nor a consonant.\n", ch);
 
 
	return 0;
}
