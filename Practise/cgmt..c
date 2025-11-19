#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int maxX = getmaxx();  // screen width
    int maxY = getmaxy();  // screen height

    // 1. Draw point in 4 different colours at corners
    putpixel(0, 0, RED);              // Top-left
    putpixel(maxX, 0, GREEN);         // Top-right
    putpixel(0, maxY, BLUE);          // Bottom-left
    putpixel(maxX, maxY, YELLOW);     // Bottom-right

    // 2. Draw point at center in red
    putpixel(maxX/2, maxY/2, RED);

    // 3. Points in 5 different colors (4 corners + center)
    putpixel(maxX/2, maxY/2, WHITE);  // overwrite center in WHITE

    // 4. Draw a line
    line(100, 100, 300, 100);

    // 5. Draw a rectangle
    rectangle(350, 100, 500, 200);

    // 6. Draw a square
    rectangle(550, 100, 650, 200);

    // 7. Draw a triangle (3 lines)
    line(200, 300, 300, 400);
    line(300, 400, 100, 400);
    line(100, 400, 200, 300);

    // 8. Draw an ellipse
    ellipse(500, 300, 0, 360, 100, 50);

    getch();
    closegraph();
    return 0;
}
