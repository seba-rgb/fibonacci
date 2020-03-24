int fibonacci(int n)
{
        int x, y, z;
        if (n <= 1)
                return n;
        for (x = 0, y = 1; n > 1; n--)
        {
                z = y;
                y += x;
                x = z;
        }
        return y;
}
