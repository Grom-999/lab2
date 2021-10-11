#include <iostream>
#include <cmath>


void T()
{

    for (int q = 0; q < 255; ++q)
    {
        std::cout << static_cast<char>(q)<< " " << q  << std::endl;
    }
}

void T2()
{
std::cout<< "enter character :"<<std::endl; //введите символ
char a;
std::cin >> a;

if (a > '/' && a < ':')
{
    std::cout << "you entered a number" << std::endl; //вы ввели цифру
}

else if( a <= 'Z' &&  a >= 'A'  || ( a >= 'a' && a <= 'z')) {
    std::cout << "you entered a letter" << std::endl;  //вы ввели букву

}

else{
    std::cout << "symbol not defined" << std::endl; //символ не определен
}
}

void T3()
{
    std::cout<<"enter the number"<<std::endl; //введите число
    unsigned int num;
    int y;
    std::cin>>num;
    switch(num % 5){
        case 0: y = -1;break;
        case 1: y = num-1;break;
        case 2: y = 5; break;
        case 3: y = -num;break;
        case 4: y = pow(num, -2);break;
    }
    std::cout<<"y(x) = "<< y << std::endl;


}


double fact(double num)
{
    double f=1;
    for(;num>0;--num)
    {
        f*=num;
    }
    return f;
}



void T4 ()
{
    int x;
    int n=0;

    std::cout<<"enter х :"<< std::endl; //введите х
    std::cin>>x;

    double k=pow(-1,n) * pow(x,2*n+1) / static_cast<double>(fact(2*n+1));

    std::cout<< "enter precision :"<<std::endl; //введите точность
    std::cout<< "1. 10⁻² :"<<std::endl;
    std::cout<< "2. 10⁻³ :"<<std::endl;
    std::cout<< "3. 10⁻⁴ :"<<std::endl;
    std::cout<< "4. 10⁻⁵ :"<<std::endl;
    std::cout<< "5. 10⁻⁶ :"<<std::endl;

    int t;
    std::cin>>t;

if(t==1)
{
    while (abs(sin(x) - k) > pow(10, -2))
    {
        ++n;

        k += pow((-1), n) * pow(x, 2 * n + 1) / fact(2 * n + 1);

        std::cout << abs(sin(x) - k) << std::endl;
    }

    std::cout << "number of iterations " << n; //количество итераций
}

else if(t==2)
    {
        while (abs(sin(x) - k) > pow(10, -3))
        {
            ++n;

            k += pow((-1), n) * pow(x, 2 * n + 1) / fact(2 * n + 1);

            std::cout << abs(sin(x) - k) << std::endl;
        }

        std::cout << "number of iterations " << n;  //количество итераций
    }

else if(t==3)
{
    while (abs(sin(x) - k) > pow(10, -4))
    {
        ++n;

        k += pow((-1), n) * pow(x, 2 * n + 1) / fact(2 * n + 1);

        std::cout << abs(sin(x) - k) << std::endl;
    }

    std::cout << "number of iterations " << n; //количество итераций
}

else if(t==4)
{
    while (abs(sin(x) - k) > pow(10, -5))
    {
        ++n;

        k += pow((-1), n) * pow(x, 2 * n + 1) / fact(2 * n + 1);

        std::cout << abs(sin(x) - k) << std::endl;
    }

    std::cout << "number of iterations " << n; //количество итераций
}

else if(t==5)
{
    while (abs(sin(x) - k) > pow(10, -6))
    {
        ++n;

        k += pow((-1), n) * pow(x, 2 * n + 1) / fact(2 * n + 1);

        std::cout << abs(sin(x) - k) << std::endl;
    }

    std::cout << "number of iterations " << n; //количество итераций
}

else
{
    std::cout<< "unsubstantiated accuracy. Try again"<<std::endl; //непредложенная точность. Повторите попытку
}

}


int main()
{  // T();
    // T2();
   // T3();
   // T4();
}
