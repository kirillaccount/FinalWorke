#include <stdio.h>

int main() {
    short ar = 5; 
    short b = 4;
    short c = 3;
    short d = 2;
    short e = 1;
    short h = 1; //step
    short n = 3;
    int arr[10] = { -15, -10, -7, -2, 1, 3, 5, 7, 9, 10 };
    for (int i = 0; i < 10; i++) {
	if (arr[i] % 2 == 0) {
	    printf("%d ", arr[i]);
        }
    }
    

    short result[100][3];

    _asm {
        mov cx, n
        lea esi, result
        mov bx, b

        loop_start :
        mov ax, ar
            add ax, bx
            sub ax, c
            cwd
            idiv d
            imul e
            mov[esi], ax
            add esi, 2
            mov[esi], bx
            add esi, 2
            mov ax, n
            sub ax, cx
            inc ax
            mov[esi], ax
            add esi, 2
            add bx, h
            loop loop_start
    }

    printf("Function\tArgument\tIndex\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\n", result[i][0], result[i][1], result[i][2]);
    }

    return 0;
}
