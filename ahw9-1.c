#include <stdio.h>

int main(void) {
    int r, g, b;

    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);

    
    int colors[5][3] = {
        {0, 0, 0},       
        {255, 0, 0},     
        {0, 255, 0},     
        {0, 0, 255},     
        {255, 255, 255}  
    };

    char *names[5] = {
        "Black", "Red", "Green", "Blue", "White"
    };

    int minDist = 999999999;
    int nearest = 0;

    for (int i = 0; i < 5; i++) {
        int dr = r - colors[i][0];
        int dg = g - colors[i][1];
        int db = b - colors[i][2];

        int dist = dr*dr + dg*dg + db*db;

        if (dist < minDist) {
            minDist = dist;
            nearest = i;
        }
    }

    printf("The nearest color is %s", names[nearest]);

    return 0;
}


