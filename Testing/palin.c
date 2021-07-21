int is_palin(int n)
// implementation
{
    int rev = 0;
    int number = n;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return number == rev;
}