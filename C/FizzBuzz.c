#include <stdio.h>

int main(char argc[], char **argv) {
    void FizzBuzz() {
        char t = 0;
        for (unsigned char i = 1; i <= 100; ++i, t = 2) {
            (i % 3) ? --t : printf("Fizz");
            (i % 5) ? --t : printf("Buzz");
            if (!t) printf("%d", i);
            printf("\n");   
        }
    }
    FizzBuzz();
}
