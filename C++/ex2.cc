#include <iostream>

using namespace std;

//if i % 3 == 0 -> += Fizz
//if i % 5 == 0 -> += Buzz
//if i % 3 != 0 && if i % 5 != 0 -> i

int main() 
{

  

  for(int i = 0; i < 100; i++)
  {
    string word = "";

    if(i % 3 == 0)
    {
      word += "Fizz";
    }
    else if(i % 5 == 0)
    {
      word += "Buzz";
    }

    if(word == "")
    {
      word = to_string(i);
    }

    cout << "\n" << word;
  }
}
