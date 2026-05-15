#include <iostream>
#include <string>
#include <limits>

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
            return value;
        }

        std::cout << "Invalid input. Please enter a valid number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

int getValidInt(const std::string& prompt) {
    int value;

    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (!std::cin.fail()) {
            return value;
        }

        std::cout << "Invalid input. Please enter a valid number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

double weird_summation(double a, double b) {
    double result = 0;
    if (b >= a) {
        for (double i = a; i <= b; ++i) {
            result = result + i;       
        }
    }
    else {
        for (double i = b; i <= a; ++i) {
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

void printMenu() {
    std::cout << "welcome to this useless awful caculator: \n";
    std::cout << "enter 1 for addition \n";
    std::cout << "enter 2 for subtraction \n";
    std::cout << "enter 3 for multiplication \n";
    std::cout << "enter 4 for division \n";
    std::cout << "enter 5 for weird summation thing that I forgot the math term \n";
    std::cout << "enter 6 for weird power thing that I forgot the math term (wdym this is not a power function idc)\n";
    std::cout << "enter 7 for exit \n";
    
}


class Calculator {
    public:
        void run() {
        while (true) {
            double number1 = getValidDouble("Enter the first number: ");
            double number2 = getValidDouble("Enter the second number: ");
            printMenu();
            int userInput = getValidInt("Enter your choice (1-7): ");

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
                case 5:
                    std::cout << "the weird summation thing that I forgot the math term is: \n" << weird_summation(number1, number2) << "\n";
                    break;
                case 6:
                    std::cout << "what even is its name? Anyways the answer is:  \n" << weird_multi(number1, number2) << "\n";
                    break;
                case 7:
                    std::cout << "are you sure you want to exit? (Y/N) \n";
                    char confirmation;
                    std::cin >> confirmation;
                    
                    if (confirmation == 'Y' || confirmation == 'y') {
                        return;
                    }
                    break;
                default:
                    std::cout << "invalid input. Pls enter 1-7\n";
                    break;
                    

            }
    }    
        }

};

int main() {
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