#include <iostream>

int main() {
  //pointer arrays
  int num1 = 10;
  int num2 = 20;
  int num3 = 30;

  int nums[3] = {num1, num2, num3};

  // declared and initialized the pointer array
  int *pa[3] = {NULL };

  // make sure pa isnt null
  //and take the memory of each
  //element in the integer array (nums)
  // and add it to the pointer array (pa)
  if (pa) 
  {
    for (int i = 0; i < 3; i++)
    {
      pa[i] = &nums[i];      
    }
    for (int i = 0; i <3; i++)
    {
      if (pa[i])
      {
        std::cout << "nums[" << i << "] = " << *pa[i] << std::endl;
      }
    }
  }

  std::cout << std::endl << std::endl;
  //ex 2 // same thing but not in loop
  int *pa2[3] = {NULL};
  if(pa2) {
    pa2[0] = &nums[0];
    pa2[1] = &nums[1];
    pa2[2] = &nums[2];
  }
  if(pa2[0])
  {
    std::cout << "nums[0] = " << *pa2[0] << std::endl;
  }
  if(pa2[1])
  {
    std::cout << "nums[1] = " << *pa2[1] << std::endl;
  }
  if(pa2[2])
  {
    std::cout << "nums[2] = " << *pa2[2] << std::endl;
  }
  return 0;
}