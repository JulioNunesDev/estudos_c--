#include <iostream>




int fatorial(int n){
    if(n > 1){
    return n * fatorial(n - 1);
    }
    return n;
}

int fibonacci(int num){
    if(num <= 1 || num == 2) return 1;

    return fibonacci(num - 1) + fibonacci(num - 2);
}



int main ()
{
  std::cout << "Fatorial de: " <<  fatorial(5) << "\n\n";
 
 int val = 8;
 for(int i = 0; i < val; i++)
 {
    std:: cout << fibonacci(i+1) << " ";
 }

    return 0;
}
