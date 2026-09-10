#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <cmath>

// Function declaration
double addNumbers(double a, double b);
double multiplyNumbers(double a, double b);
double divideNumbers(double a, double b);
double subtractNumbers(double a, double b);

void clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
double getValidDouble(const std::string& prompt) {
    double value;

    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (!std::cin.fail()) {
            clearInputBuffer();
            return value;
        }

        std::cout << "Invalid input. Please enter a valid number.\n";
        clearInputBuffer();
    }
}

int getValidInt(const std::string& prompt) {
    int value;

    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (!std::cin.fail()) {
            clearInputBuffer();
            return value;
        }

        std::cout << "Invalid input. Please enter a valid number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

double weird_summation(double a, double b) {
    long long result = 0;
    long long start = static_cast<long long>(a);
    long long end = static_cast<long long>(b);
    if (start <= end) {
        for (long long i = a; i <= b; ++i) {
            result = result + i;       
        }
    }
    else {
        for (long long i = b; i <= a; ++i) {
            result = result + i;
        }
    }
    return result;
}

long long weird_multi(long long a, long long b) {
    long long result = 1;
    long long start = (a < b) ? a : b;
    long long end = (a < b) ? b : a;
    for (long long i = start; i <=end; i++) {
        result = result*i;

    }
    return result;
}

double real_power(double a, double b) {
    return std::pow(a, b);
}

double sqrt1(double a) {
    if (a < 0) {
        std::cout << "Square root cannot be negative. What do you mean 'imaginary numbers'? That's nonsense. (Remember, I suck at math)\n";
        return 0;
    } else {
        return static_cast<double>(std::sqrt(a));
    }
}

void printMenu() {
    std::cout << "welcome to this useless awful caculator made by someone who absolutely SUCK at math: \n";
    std::cout << "enter 1 for addition \n";
    std::cout << "enter 2 for subtraction \n";
    std::cout << "enter 3 for multiplication \n";
    std::cout << "enter 4 for division \n";
    std::cout << "enter 5 for weird summation thing that I forgot the math term \n";
    std::cout << "enter 6 for weird power thing that I forgot the math term (wdym this is not a power function idc)\n";
    std::cout << "enter 7 for the real power thing \n";
    std::cout << "enter 8 for the square root \n";
    std::cout << "enter 9 for exit \n";
    std::cout << "bro judging by how I dont even know the term for 5 and 6 you know that I suck at math dont you? Thats why I only got a 4.... not a 5. \n";
    std::cout << "I am a grown ass adult with a job and I am STILL talking about the 4 in math. Thats why I peaked in high school. \n";
}

class historyLog {
    
};

class Calculator {
    public:
        void run() {
        while (true) {
            double number1 = getValidDouble("Enter the first number: ");
            double number2 = getValidDouble("Enter the second number: ");
            printMenu();
            int userInput = getValidInt("Enter your choice (1-9): ");

            switch (userInput) {
                case 1:
                    std::cout << "the sum is \n" << addNumbers(number1, number2) << "\n";
                    break;
                case 2:
                    std::cout << "the difference is \n" << subtractNumbers(number1, number2) << "\n";
                    break;
                case 3:
                    std::cout << "the multiplied number is \n" << multiplyNumbers(number1, number2) << "\n";
                    break;
                case 4:
                    if (number2 == 0) {
                        std::cout << "divider cannot be 0 \n";
                    } else {
                        std::cout << "the divided number is \n" << divideNumbers(number1, number2) << "\n";
                    }
                    break;
                case 5: {
                    std::cout << "the weird summation thing that I forgot the math term is: \n" << weird_summation(number1, number2) << "\n";
                    break;
                }

                case 6: {
                    long long int1 = static_cast<long long>(number1);
                    long long int2 = static_cast<long long>(number2);
                    std::cout << "what even is its name? Anyways the answer is:  \n" << weird_multi(int1, int2) << "\n";
                    break;
                }

                case 7: {
                    std::cout << number1 << " to the power of " << number2 << " is: " << real_power(number1, number2) << "\n";
                    break;
                }

                case 8: {
                    std::cout << "square root of" << number1 << "is: " << sqrt1(number1) << "\n";
                    break;
                }

                case 9: {
                    std::cout << "are you sure you want to exit? (Y/N) \n";
                    char confirmation;
                    std::cin >> confirmation;
                    clearInputBuffer();
                    if (confirmation == 'Y' || confirmation == 'y') {
                        return;
                    }
                    break;
                }
                default:
                    std::cout << "invalid input. Pls enter 1-9\n";
                    break;
                    

            }
    }    
        }

};

int main() {
    int a = 10;
    int* p = &a;
    std::cout << "Value of a: " << a << "\n";
    std::cout << "Address of a (&a): " << &a << "\n";
    std::cout << "Value stored in p (address): " << p << "\n";
    std::cout << "Value that p points to (*p): " << *p << "\n";
    std::cout << "I... dont even have the energy or time for this after work yk? I am sorry for ignoring you for so long..." << "\n";
    std::cout << "why am I typing this to a calculator program that I made for fun using C++?" << "\n";
    std::cout << "this sts::cout chain is getting long. Idk. " << "\n";
    std::cout << "dont worry, calculator.cpp and calculator.exe, I wont abandon you guys. " << "\n";
    Calculator calc;
    calc.run();
    return 0;
}

// Function definition
double addNumbers(double a, double b) {
    double result = a + b;
    return result;
}

double multiplyNumbers(double a, double b) {
    double result1 = a * b;
    return result1;
}

double subtractNumbers(double a, double b) {
    double result2 = a - b;
    return result2;
}

double divideNumbers(double a, double b) {
    double result3 = a/b;
    return result3;
}