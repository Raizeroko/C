#define _CRT_SECURE_NO_WARNINGS 1

//1544. ÕûÀí×Ö·û´®
//
char* makeGood(char* s) {
    int top = 0;
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (top == 0 || abs(s[top - 1] - s[i]) != 'a' - 'A')
        {
            s[top++] = s[i];
        }
        else
        {
            top--;
        }
    }
    s[top] = '\0';
    return s;
}


//
//
