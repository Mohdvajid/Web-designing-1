#include <iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3];
    int add[3][3], multi[3][3];
    cout << "enter the element first 3*3";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "enter the element second 3*3";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }
    // addition
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
            cout << add[i][j] << " ";
        }
        cout << "\n";
    }

    
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
         multi[i][j]=0;
         for(int k=0;k<3;k++)
         {
            multi[i][k]=multi[i][k]+a[i][k]*b[i][k];
         }
     }
    

    cout << "\nMultiplication Matrix:\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++){
            cout<< multi[i][j]<<" ";
        }

        cout << endl;
    }
    return 0;
}
