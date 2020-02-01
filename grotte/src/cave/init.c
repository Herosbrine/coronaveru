int random_a_b(void)
{
    int a = 0;
    int b = 698;
    int random = 0;

    srand(time(NULL));
    random = ((rand() % (b - a)) + a);
    return (random);
}

int random_a_b1(void)
{
    int a = 0;
    int b = 698;
    int random = 0;

    srand(time(NULL));
    random = (((rand() + 5) % (b - a)) + a);
    return (random);
}
