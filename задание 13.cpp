#include <iostream>

using namespace std;

bool checkMatrix(int a[][3], int rows, int cols)
{
    for(int i=0;i<rows;i++)
    {
        bool ok=false;

        for(int j=0;j<cols;j++)
            if(a[i][j]==0)
                ok=true;

        if(!ok)
            return false;
    }

    for(int j=0;j<cols;j++)
    {
        bool ok=false;

        for(int i=0;i<rows;i++)
            if(a[i][j]==0)
                ok=true;

        if(!ok)
            return false;
    }

    return true;
}

void test()
{
    int a[3][3]=
    {
        {0,1,2},
        {3,0,4},
        {5,6,0}
    };

    cout<<checkMatrix(a,3,3);
}

int main()
{
    test();

    return 0;
}
