#include <stdio.h>
int main() {
    char data[100], stuffed[200];
    int i = 0, j = 0, count = 0;
    
    printf("Enter binary data: ");
    scanf("%s", data);
    
    while (data[i] != '\0') {
        stuffed[j++] = data[i];
        count = (data[i] == '1') ? count + 1 : 0;
        if (count == 5) {
            stuffed[j++] = '0';
            count = 0;
        }
        i++;
    }
    stuffed[j] = '\0';
    
    printf("Original:  %s\n", data);
    printf("Stuffed:   %s\n", stuffed);
    
}

