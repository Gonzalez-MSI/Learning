#include <stdio.h>
#define ASCII_ALPHABET 30
#define MESSAGE_MAX_CHARACTERS 30
#define DASH_LINE puts("--------------------------")

int main(){

    char msg[MESSAGE_MAX_CHARACTERS];
    char msg_packed[MESSAGE_MAX_CHARACTERS];
    char msg_packed_encrypted[MESSAGE_MAX_CHARACTERS];
    char msg_d[MESSAGE_MAX_CHARACTERS];
    char msg_packed_decrypted[MESSAGE_MAX_CHARACTERS];
    int a, b, ai;
    int i, n, m;

    do{
        printf("Ingrese el valor de a: ");
        scanf("%d", &a);
    } while (a > 1 || a < ASCII_ALPHABET);

    do{
        printf("Ingrese el valor de b: ");
        scanf("%d", &b);
    } while (b < 0 || b > ASCII_ALPHABET);

    printf("Ingrese el mensaje: ");
    getchar();

    i = 0;
    do{
        msg[i] = getchar();
        i++;
        if (i > MESSAGE_MAX_CHARACTERS)
            break;
    } while (msg[i - 1] != 10);
    m = i - 1;
    msg[m] = '\0';

    for (i = 0; i < m; i++){

        if (msg[i] >= 'A' && msg[i] <= 'Z')
            msg_packed[i] = msg[i] - 'A';
        else if (msg[i] >= 'a' && msg[i] <= 'z')
            msg_packed[i] = msg[i] - 'a' + (ASCII_ALPHABET / 2);
        else
            msg_packed[i] = msg[i];

        printf("%d ", msg_packed[i]);
    }

    printf("\n");
    return 0;
}