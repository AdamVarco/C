#include <stdio.h>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("Enter the elements one by one \n");
    int array[num];
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array is \n");
    for (i = 0; i < num; i++)
    {
      printf("%d\n", array[i]);
    }
    /*  algorthm sorting begins */
    std::sort(array.begin(),array.end());
    printf("Sorted array is...\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
    set<int> s( array.begin(), array.end() );
    array.assign(s.begin(),s.end());
     printf("\n No Duplicates");
     for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
