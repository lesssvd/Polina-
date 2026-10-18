#include <stdio.h>
#include <stdlib.h>

double calculate_average(int *numbers, int count) {
    if (count == 0) return 0;

    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }
    return sum / count;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Используйте: %s число1 число2 число3 ...\n", argv[0]);
        return 1;
    }

    int count = argc - 1;
    int *numbers = (int *)malloc(count * sizeof(int)); 

    for (int i = 0; i < count; i++) {
        numbers[i] = atoi(argv[i + 1]);
    }

    double avg = calculate_average(numbers, count);
    printf("Среднее значение: %.2f\n", avg);

    free(numbers);
    return 0;
}
