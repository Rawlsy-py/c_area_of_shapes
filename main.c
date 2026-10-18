#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    printf("What shape are you calculating?\n");
    printf("1: Square\n");
    printf("2: Rectangle\n");
    printf("3: Right angle Triangle\n");
    printf("4: Exit\n");
    do {

        printf("Enter Choice:\n");
        scanf(" %d", &choice);
        switch (choice) {
        case (1):
            printf("Enter length of side:\n");
            int length_square;
            scanf(" %d", &length_square);
            int area_square;
            area_square = length_square * length_square;
            printf("The Area of the Square is: %d\n", area_square);
            break;
        case (2):
            printf("Enter Length:\n");
            int length_rectangle;
            scanf(" %d", &length_rectangle);
            int width_rectangle;
            printf("Enter Width;\n");
            int area_rectangle;
            scanf(" %d", &width_rectangle);
            area_rectangle = length_rectangle * width_rectangle;
            printf("The Area of the Rectangle is: %d\n", area_rectangle);
            break;
        case (3):
            printf("Enter Length of side A:\n");
            int side_a;
            scanf(" %d", &side_a);
            printf("Enter Length of side B:\n");
            int side_b;
            scanf(" %d", &side_b);
            int area_right_triangle;
            area_right_triangle = (side_a * side_b) / 2;
            printf("The Area of the Right Triangle is: %d\n",
                   area_right_triangle);
            break;
        default:
            break;
        }
    } while ((choice < 1) || (choice <= 3));
    printf("Exiting. Goodbye...");
    return 0;
}
