
int main() {
  // Initialize variables
  int count = 0;
  int i = 0;

  // Loop through an array of numbers
  while (i < 10) {
    if (i % 2 == 0) {
      count++;
    }
    i++;
  }

  // Print the result
  printf("There are %d even numbers in the array.\n", count);

  return 0;
}