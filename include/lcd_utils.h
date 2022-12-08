// test
int add3(int x) {
    return x+3;
}

void rounded_rectangle(
	DisplayBuffer *it,
	int x, int y, int width, int height, int radius, 
	Color color_outline, Color color_background
) 
{
      // top left
      it->filled_circle(x + radius, y + radius, radius,     color_outline);
      it->filled_circle(x + radius, y + radius, radius - 1, color_background);

      // top right
      it->filled_circle(x + width - 1 - radius, y + radius, radius,     color_outline);
      it->filled_circle(x + width - 1 - radius, y + radius, radius - 1, color_background);
      
      // bottom left
      it->filled_circle(x + radius, y + height - 1 - radius, radius,     color_outline);
      it->filled_circle(x + radius, y + height - 1 - radius, radius - 1, color_background);

      // bottom right
      it->filled_circle(x + width - 1 - radius, y + height - 1 - radius, radius,     color_outline);
      it->filled_circle(x + width - 1 - radius, y + height - 1 - radius, radius - 1, color_background);

      // filled rectangle background
      it->filled_rectangle(x + radius + 1, y + 1, width - 2*radius - 1, height - 1, color_background);	// from top to bottom
      it->filled_rectangle(x + 1, y + radius + 1, width - 1, height - 2*radius - 1, color_background);	// from left to right

      // remaining straight outside lines
      it->horizontal_line(x + radius,    y,              width - 2*radius,  color_outline);
      it->horizontal_line(x + radius,    y + height - 1, width - 2*radius,  color_outline);
      it->vertical_line  (x,             y + radius,     height - 2*radius, color_outline);
      it->vertical_line  (x + width - 1, y + radius,     height - 2*radius, color_outline);
};

