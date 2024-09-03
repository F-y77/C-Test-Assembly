#include <iostream>g++ --version

#include <cmath>

// 功能模块1：输出Hello World
void printHelloWorld()

{
    std::cout << "Hello World!" << std::endl;
}
 
// 功能模块2：计算两个数的和
void calculateSum(int a, int b)
{
    int sum = a + b;
    std::cout << "The sum of " << a << " and " << b << " is " << sum << std::endl;
}

//功能模块3：打印一个数组
void printArray(int arr[], int size){
    std::cout << "The array is: ";
    for (int i = 0; i < size; ++i){
        std::cout << arr[i] << " ";         


    }
    std::cout << std::endl;
}   

//功能模块4：判断一个数是否为奇数还是偶数
void checkOddOrEven(int num){
    if (num % 2 == 0){
        std::cout << num << " is odd." << std::endl;         
    }
    else{
        std::cout << num << " is even." << std::endl;         
    }
    
}

//功能模块5: 求一元二次方程的根
void calculateQuadraticEquation(double a, double b, double c){
    double delta = b*b - 4*a*c;
    if (delta > 0){
        double root1 = (-b + sqrt(delta)) / (2*a);
        double root2 = (-b - sqrt(delta)) / (2*a);
        std::cout << "The roots are " << root1 << " and " << root2 << std::endl;
    }
    else if (delta == 0){
        double root = -b / (2*a);                                
        std::cout << "The root is " << root << std::endl;
    }
    else{
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-delta) / (2*a);
        std::cout << "The roots are " << realPart << " + " << imaginaryPart << "i and " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }
}

int main()
{
    // 调用功能模块1
    printHelloWorld();

    // 调用功能模块2
    calculateSum(5, 7);

    // 调用功能模块3
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);

    // 调用功能模块4
    checkOddOrEven(7);

    // 调用功能模块5
    calculateQuadraticEquation(1, -5, 6);

    return 0;
}


