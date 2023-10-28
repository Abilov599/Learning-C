#include <stdio.h>

//! task 1

// int main() {
//  printf ("Press Enter to continue\n");
//  char str[100];
// scanf ("%s",str);
// printf("%s\n",str);
//     return 0;
// }

//! task 2

// int addNumbers(int a, int b);

// int main()
// {
//   printf("Press Enter to continue\n");
//   int a,b;
//   scanf("%d %d", &a, &b);
//  int result = addNumbers(a, b);
//  printf("%d\n", result);
//   return 0;
// }

// int addNumbers(int a, int b)
// {
//   return a + b;
// }

//! Task 3

// int sum(int a, int b);
// int subtract(int a, int b);
// int divide(int a, int b);
// int multiply(int a, int b);

// int main()
// {
//   printf("Press Enter to continue\n");
//   int a, b;
//   scanf("%d %d", &a, &b);
//   int result = divide(a, b);
//   printf("%d\n", result);
//   return 0;
// }

// int sum(int a, int b)
// {
//   return a + b;
// }

// int subtract(int a, int b)
// {
//   return a - b;
// }

// int divide(int a, int b)
// {
//   if (b != 0)
//     return a / b;
// }

// int multiply(int a, int b)
// {
//   return a * b;
// }

//! task 4

// int main()
// {
//   printf("Press Enter to continue\n");
//   char a[100], b[100];
//   printf("Enter your name\n");
//   scanf("%s", a);
//   printf("Enter your surname\n");
//   scanf("%s", b);
//   printf("Name: %s, Surname: %s\n", a, b);
//   return 0;
// }

//! task 5

#define N 100
int lengthof(char a[]);

int main()
{
  char fullName[N]; // Variable to store the full name
  // Concatenate the name and surname with a space in between
  fgets(fullName, N, stdin);
  int length = lengthof(fullName) - 1;
  fullName[length] = '\0';
  printf("Full name: %s\n", fullName);
  return 0;
}
int lengthof(char fullName[])
{
  int length = 0;
  while (fullName[length] != '\0')
  {
    length++;
  }

  return length;
}

//! task 6

// int sum();
// int print();

// int main()
// {
//   sum();
//   print();
//   return 0;
// }

// int addNumbers(int a, int b);

// int sum()
// {
//   printf("Press Enter to continue\n");
//   int a, b;
//   scanf("%d %d", &a, &b);
//   int result = addNumbers(a, b);
//   printf("%d\n", result);
//   return 0;
// }

// int print()
// {
//   printf("Press Enter to continue\n");
//   char a[100], b[100];
//   printf("Enter your name\n");
//   scanf("%s", a);
//   printf("Enter your surname\n");
//   scanf("%s", b);
//   printf("Name: %s, Surname: %s\n", a, b);
//   return 0;
// }

// int addNumbers(int a, int b)
// {
//   return a + b;
// }
