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

int main()
{
  char name[50];
  char surname[50];
  char fullName[100]; // Variable to store the full name

  printf("Enter your name: ");
  scanf("%s", name);

  printf("Enter your surname: ");
  scanf("%s", surname);

  // Concatenate the name and surname with a space in between
  sprintf(fullName, "%s %s", name, surname);

  printf("Full name: %s\n", fullName);

  return 0;
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
