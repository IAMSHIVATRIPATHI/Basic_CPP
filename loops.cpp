#include <iostream>
using namespace std;
 
int main()
{
    int num = 10;
    int i;
    for (i = 0; i < num; i++)
    {
        cout << i << " ";
    }

   i = 5;
    while (i < 10)
    {
        cout << i << " ";
        i++;
    }
 
    
     i = 5;
    do
    {
        cout << i << " ";
        i++;
    } while (i < 5);

   num = 10;
   for (i = 0; i < num; i++)
    {
        if (i == 6)
        {
            break;
        }
        cout << i << " ";
    }
 

    for (int i = 0; i <= 10; i++)
    {
        if (i < 6)
        {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}

