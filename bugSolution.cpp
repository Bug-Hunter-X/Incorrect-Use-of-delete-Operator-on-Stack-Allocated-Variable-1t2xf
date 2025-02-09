int main() {
  int x = 5;
  int *ptr = &x; 
  *ptr = 10; 
  // delete ptr; //Removed because it's not needed here
  return 0;
}
/* Or, if you need dynamic allocation:
int main() {
  int *ptr = new int(5);
  *ptr = 10;
  delete ptr; 
  return 0;
}*/