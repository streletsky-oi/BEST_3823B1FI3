bool point_in_rectangle(double x, double y) {
    double rectangle_x1 = -5, rectangle_y1 = -5;
    double rectangle_x2 = 5, rectangle_y2 = 5;
    return (x >= rectangle_x1 && x <= rectangle_x2) && (y >= rectangle_y1 && y <= rectangle_y2);
}

bool point_in_square(double x, double y) {
    return false; // Not implementation
}

bool point_in_triangle(double x, double y) {
    return false; // Not implementation
}

int number_fugures(double x, double y) {
    return 0; // Not implementation
}
