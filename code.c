int main()
{
  int* p1, p2;
  int n = 30;
  p1 = &n;
  p2 = &n; // error
    
   int* p1; // p1 can point to any location in memory
  int n = *p1; // Error on debug builds
  printf("%d", n); // access violation on release builds
    
     int* p1; // p1 can point to any location in memory
  int m;
  p1 = &m; // initialize pointer with an uninitialized variable
  int n = *p1;
  printf("%d", n); // huge negative number in debug and 0 in release on VC++
    
    int* p1; // p1 can point to any location in memory
  int m = 100;
  p1 = m; // error

    
    int* p1; // create a pointer to an integer
  int m = 100;
  p1 = &m; // assign address of m to p1
  *p1++; // ERROR: we did not increment value of m
  printf("%d\n", *p1);
  printf("%d\n", m);

    int* p1; // create a pointer to an integer
  int m = 100;
  p1 = &m;
  free(p1);//error - trying to free stack memory using free()
  
   int* p1;
  if ((p1 = (int*)malloc(sizeof(int))) == NULL)
  {
    return 1;
  }
  *p1 = 99;
  free(p1);
  *p1 = 100; // BAD - undefined behavior
  
   char* str1 = (char*)malloc(strlen("Thunderbird") + 1);
  strcpy_s(str1, strlen("Thunderbird") + 1, "Thunderbird");
  //...
  free(str1);  // first free
         //...
  free(str1); // double free
  
  malloc(sizeof(int))
    
     const char arr[] = "hello";
  const char *cp = arr;
  printf("Size of arr %lu\n", (int)sizeof(arr));
  printf("Size of *cp %lu\n", (int)sizeof(*cp));

  return 0;
}
