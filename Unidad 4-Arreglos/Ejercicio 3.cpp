#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int matriz[50][50],sumaImpares=0;
    for (int i=0;i<50;i++){
        for (int j=0;j<50;j++){
            matriz[i][j] = rand()%101;
            if (matriz[i][j]%2==0){
                cout<<matriz[i][j]<<" ";
            }else {
                sumaImpares=sumaImpares+1;
            }
        }
    }
    cout<<"\nSe encontraron "<<sumaImpares<<" numeros impares";
    return 0;
}
