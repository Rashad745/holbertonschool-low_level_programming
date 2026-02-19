int main(int argc, char *argv[])
{
    int a, b, result;
    int (*op)(int, int);

    if (argc != 4)
    {
        dprintf(STDERR_FILENO, "Usage: ./3-calc num1 operator num2\n");
        exit(97);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);
    op = get_op_func(argv[2]);

    if (!op)
    {
        dprintf(STDERR_FILENO, "Error\n");
        exit(99);
    }

    result = (*op)(a, b);
    printf("%d\n", result);
    return (0);
}
