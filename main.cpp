#include <iostream>

using namespace std;

float add(int a,int b){
    return a+b;
}

float subtract(int a,int b){
    return a-b;
}

float multiplication(int a,int b){
    return a*b;
}

float division(int a,int b){
    return a/b;
}

float power(float a,float b){
    float r = 1;
    if(b > 0){
        for(int i=0; i < b; i++){
            r*=a;
        }
    }
    else if (b<0){
        float ro = 1;
        for(int i=0; i < -b; i++){
            ro*=a;
        }
    r = 1/ro;
    }
    return r;
}

double sin(float a){
    double c = a*3.14/180;
    double d = c - (power(c,3))/6 + (power(c,5))/120 - (power(c,7))/5040 + (power(c,9))/362880 - (power(c,11))/39916800;
    return d;
}

double cos(float a){
    double c = a*3.14/180;
    double d = 1 - power(c,2)/2 + power(c,4)/24 - power(c,6)/720 + power(c,8)/40320 - power(c,10)/3628800;
    return d;
}

double tan(float a){
    double c = a*3.14/180;
    double d = c + power(c,3)/3 + 2*power(c,5)/15 + 17*power(c,7)/315 + 62*power(c,9)/2835;
    return d;
}

double calculator(){
    int a;
    cout <<  "1. Addition\n" << "2. Subtraction\n" << "3. Multiplication\n" << "4. Division\n" << "5. Exponential\n" << "6. sinx\n" << "7. cosx\n" << "8. tanx\n" << "What function do you want to perform :";
    cin >> a;
    if (a == 1){
        int c,d;
        cout << "Enter the first number :";
        cin >> c;
        cout << "Enter the second number :";
        cin >> d;
        cout << add(c,d);
    }
    else if (a == 2){
        int c,d;
        cout << "Enter the first number :";
        cin >> c;
        cout << "Enter the second number :";
        cin >> d;
        cout <<subtract(c,d);
    }
    else if (a == 3){
        int c,d;
        cout << "Enter the first number :";
        cin >> c;
        cout << "Enter the second number :";
        cin >> d;
        cout << multiplication(c,d);
    }
    else if (a == 4){
        int c,d;
        cout << "Enter the first number :";
        cin >> c;
        cout << "Enter the second number :";
        cin >> d;
        cout << division(c,d);
    }
    else if (a == 5){
        int c,d;
        cout << "Enter the base number :";
        cin >> c;
        cout << "Enter the power :";
        cin >> d;
        cout << power(c,d);
    }
    else if (a == 6){
        int c;
        cout << "Enter the angle in degrees :";
        cin >> c;
        cout << sin(c);
    }
    else if (a == 7){
        int c;
        cout << "Enter the angle in degrees :";
        cin >> c;
        cout << cos(c);
    }
    else if (a == 8){
        int c;
        cout << "Enter the angle in degrees :";
        cin >> c;
        cout << tan(c);
    }
    else{
        cout << "Wrong Input";
    }
}

int main()
{
    calculator();
    return 0;
}

