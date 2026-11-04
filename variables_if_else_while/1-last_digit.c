/**
 * Using modul to find the last number
 *
 */

if (n % 10 > 5)
{
    printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if (n % 10 == 0)
{
    printf("Last digit of %d is %d and is 0\n", n, n % 10);
}
else
{
    printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
