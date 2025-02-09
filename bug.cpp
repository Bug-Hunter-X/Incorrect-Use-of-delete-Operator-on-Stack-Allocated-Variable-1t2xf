int main() {
  int x = 5;
  int *ptr = &x; 
  *ptr = 10; 
  delete ptr; //Error: delete is used for dynamically allocated memory
  return 0;
}