#include <stdio.h>

int main (){
    //Holi clase :v 
    
    float aNum, bNum;

    scanf("%f",&aNum);
    scanf("%f",&bNum);

    if (aNum > bNum){
        printf("%.1f > %.1f",aNum,bNum);    
    }
    else if (aNum < bNum){
        printf("%.1f > %.1f",bNum,aNum);

    }
    else{
        printf("Son iguales");
    }
    
    //Holi clase :v
    return 0;
}
