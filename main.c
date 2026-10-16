
#include <stdio.h>

void displayDuration(int totalSeconds) {
    int h, m, s, result;

    h = totalSeconds / 3600;
    m = (totalSeconds % 3600) / 60;
    s = totalSeconds % 60;

    result = printf("%d h %d min %d s", h, m, s);
}

int main() {
    int seconds;

    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    if (seconds < 0) {
        printf("Error!");
    }
    else {
        displayDuration(seconds);
    }

    return 0;
}
