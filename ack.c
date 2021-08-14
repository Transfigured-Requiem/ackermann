//  Add one to the fours in the fors 
//  May God rest your computer in peace 
#include<stdio.h>

int ack(int m, int n)
{
    int ans;
    if (m == 0)             ans = n + 1;
    else if (n == 0)  ans = ack(m-1, 1);
    else    ans = ack(m-1, ack(m, n-1));
    return(ans);
}
int main(int argc, char const *argv[])
{
    for  (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            printf("ackerman(%d, %d) is: %\n", i, j, ack(i, j));

}
