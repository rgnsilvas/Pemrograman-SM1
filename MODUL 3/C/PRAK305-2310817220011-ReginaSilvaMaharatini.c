#include <stdio.h>

int main() {

    int num, hari, jam, menit, detik, sisa1, sisa2;
    printf("Input\n");
    scanf("%d", &num);
    printf("\nOutput\n");
    
    hari = num / 86400;
    sisa1 = num % 86400;
    jam =  sisa1 / 3600;
    sisa2 = num % 3600;
    menit =  sisa2 / 60;
    detik = num % 60;

    if (num >= 0 && num < 60) {
        printf("00:00:%02d\n", detik);
    } else if (num >= 60 && num <= 3599) {
        printf("00:%02d:%02d\n", menit, detik);
    } else if (num >= 3600 && num <= 86399) {
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    } else {
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    }

    return 0;
}
