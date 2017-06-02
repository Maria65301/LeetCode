/*
 Reverse Integer
 
 Reverse digits of an integer.
 Example1: x = 123, return 321
 Example2: x = -123, return -321
 */
 
 int reverse(int x) {
    long long a=0;
    int b = x;
    while(b)
    {
        a = a*10+b%10;
        b/=10;
        if(a<INT_MIN || a>INT_MAX)
            return 0;
    }
    return a;
}
