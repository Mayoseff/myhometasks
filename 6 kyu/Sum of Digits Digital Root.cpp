int digital_root(int n)
{
    int sum = 0;
    int x = 0;
    int y = 0;
    while (n > 0 || (x - (x % 10) != 0) || (y - (y % 10) != 0)) {
        while (n > 0) {
            x += n % 10;
            n /= 10;
        }
        while (x > 0) {
            y += x % 10;
            x /= 10;
        }
        while (y > 0) {
            x += y % 10;
            y /= 10;
        }
    }
    return x-y;
}
