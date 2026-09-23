#include <stdio.h>

int main(){
    float m1 , m2 , m3 , moy , sum; 
    printf("donner m1\n ");
    printf("donner m2\n ");
    printf("donner m3\n ");
    scanf(%f , &m1);
    scanf(%f , &m2);
    scanf(%f , &m3);
    sum = m1 + m2 + m3 ;
    moy = (m1 + m2 + m3)/3
    if (moy < 10 || sum < 24) {
        printf("controle\n");
    }
    else if (moy < 12 && moy >= 10){
        printf("mention passable");
    }
    else if (moy < 14 && moy >= 12){
        printf("mention assdez bien ");
    }
    else if (moy < 16 && moy >14){
        printf("mention bien");
    }
    else {
        printf("tres bien");
    }

    return 0 ;
}
