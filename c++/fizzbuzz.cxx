#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char** argv)
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 15 == 0) 
        {
            cout << "FizzBuzz" << endl;
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz" << endl;
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
        else 
        {
            cout << i << endl;
        }
    }
}