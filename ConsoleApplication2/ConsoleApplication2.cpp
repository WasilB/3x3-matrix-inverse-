

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    //The Array
    float a[3][3] = {     {1,5,3},
                          {2,4,7},
                          {4,6,2} };

    // Finding Determinent

    int a11 = (a[1][1] * a[2][2]) - (a[1][2] * a[2][1]);
    a11 = a11 * +a[0][0];
    
    int a22 = (a[1][0] * a[2][2]) - (a[1][2] * a[2][0]);
    a22 = a22 * -a[0][1];
    
    int a33 = (a[1][0] * a[2][1]) - (a[1][1] * a[2][0]);
    a33 = a33 * +a[0][2];
    
    float ADeterminent = a11 + a22 + a33;
    if (ADeterminent == 0)
    {
        cout << "Determinent is 0" << "\n";
    }

    // Adjoint
    ADeterminent = 1 / ADeterminent;

   
  // Finding co factors..

    a[0][0] = +((a[1][1] * a[2][2]) - (a[1][2] * a[2][1]));
    a[0][1] = -((a[1][0] * a[2][2]) - (a[1][2] * a[2][0]));
    a[0][2] = +((a[1][0] * a[2][1]) - (a[1][1] * a[2][0]));

    a[1][0] = -((a[0][1] * a[2][2]) - (a[0][2] * a[2][2]));
    a[1][1] = +((a[0][0] * a[2][2]) - (a[0][2] * a[2][0]));
    a[1][2] = -((a[0][0] * a[2][1]) - (a[0][1] * a[2][0]));

    a[2][0] = +((a[0][1] * a[1][2]) - (a[0][2] * a[1][1]));
    a[2][1] = -((a[0][0] * a[1][2]) - (a[0][2] * a[0][1]));
    a[2][2] = +((a[0][0] * a[1][1]) - (a[0][1] * a[1][0]));

    for (int i = 0; i < 3; i++)
   {
       for (int j = 0; j < 3; j++)
       {
           a[i][j] = ADeterminent* a[i][j];
       }

   }

   for (int i = 0; i < 3; i++)
   {
       for (int j = 0; j < 3; j++)
       {
           cout << a[i][j] << "  ";
       }
       cout << "\n";
   }
}
