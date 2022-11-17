extern "C"{
    // Add the header files required to run your main 
    #include <assert.h>
    #include <stdio.h>
}
int sumn (int n)
{
    assert (n >= 1);

    if (n > 1)
    {
        return 2*n - 1 + sumn(n - 1);
        
    }
    else

    return 1;
}
// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    printf("%d",sumn(4));
    return 0;
}