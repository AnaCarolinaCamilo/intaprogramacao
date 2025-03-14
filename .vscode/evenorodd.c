int main() {
 
    int numA,numB;
    int i, count;

    scanf("%d", &numA);
    scanf("%d", &numB);

    if (numA > numB && numA % 2 == 0)
    {
        printf("A e maior e PAR.");
    }
    else if (numB > numA && numB % 2 == 0)
    {
        printf("B e maior e PAR.");
    }
    else if (numA > numB && numA % 2 != 0)
    {
        printf("A e maior e IMPAR.");
    }
    else if (numB > numA && numB % 2 != 0)
    {
        printf("B e maior e IMPAR.");
    }
    else if (numA == numB)
    {
        printf("A e B sao iguais.");
    }
    
    
    
    
    
    
  
 
    return 0;
}