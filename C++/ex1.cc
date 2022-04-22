#include <iostream>

using namespace std;

//if input % 3 == 0 -> Fizz
//if input % 5 == 0 -> Buzz
//if input % 3 == 0 && input % 5 == 0 -> FizzBuzz else -> input 

int main() 
{
    for(int i = 0; i < 100; i++) 
    {
      if(i % 3 == 0) 
      {
          cout << "\nFizz";
      } 
      else if(i % 5 == 0) 
      {
        cout << "\nBuzz";
      } 
      else if(i % 3 == 0 && i % 5 == 0) 
      {
        cout << "\nFizzBuzz";
      }
      else 
      {
        cout << "\n" << i;
      }
    }
}
