#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int A[3][4],B[3][4],S[3][4];
    for (int AB=1;AB<3;AB++){
        for (int i=0;i<3;i++){
            for (int j=0;j<4;j++){
                if (AB==1){
                    A[i][j]=rand()%50;
                    cout<<"A["<<i+1<<"]["<<j+1<<"] = "<<A[i][j]<<"\n";
                }else {
                    B[i][j]=rand()%50;
                    cout<<"B["<<i+1<<"]["<<j+1<<"] = "<<B[i][j]<<"\n";
                }
            }
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
        S[i][j]=A[i][j]+B[i][j];
        cout<<"S["<<i+1<<"]["<<j+1<<"] = "<<S[i][j]<<"\n";
        }
    }
    return 0;
}
