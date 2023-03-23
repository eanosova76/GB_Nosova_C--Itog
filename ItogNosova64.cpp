int N;
int M = 1;

int naturalnumbers(number)
{   
    
    printf("%d, ", number);
    if (number > 1)
        naturalnumbers(number-1);
    else
        {
        return;
        }
    }

int main()
{
    scanf("%d", &N); 
    naturalnumbers(N);
    return 0;
}