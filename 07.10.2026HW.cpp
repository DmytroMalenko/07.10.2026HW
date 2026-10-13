#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

/* Task 1 
float sum(float num, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result =  result * num;
    }
    return result;
    
}
*/

/* Task 2 
int sum(int num1, int num2) {
    int counter = 0;
    for (int i = num1; i <= num2; i++) {
        counter = counter + i; 
        cout << i << "+" << i +1 << " = " << i+ (i + 1) << endl;
    }
    return counter;
}
*/

/* Task 3 

bool num(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++){
        if (num % i == 0){
            sum += i;
        }
    }
    return sum == num;
}

*/

/* Task 4 

void printCard()
{
    cout << " ------- " << endl;
    cout << "| A     |" << endl;
    cout << "|       |" << endl;
    cout << "|   ♥   |" << endl;
    cout << "|       |" << endl;
    cout << "|     A |" << endl;
    cout << " ------- " << endl;
}



void printCard2()
{
    cout << " ------- " << endl;
    cout << "| 3     |" << endl;
    cout << "|   ♥   |" << endl;
    cout << "|   ♥   |" << endl;
    cout << "|   ♥   |" << endl;
    cout << "|    3  |" << endl;
    cout << " ------- " << endl;
}

void printCard3()
{
    cout << " ------- " << endl;
    cout << "| 5♥ ♥  |" << endl;
    cout << "|       |" << endl;
    cout << "|   ♥   |" << endl;
    cout << "|       |" << endl;
    cout << "|  ♥ ♥5 |" << endl;
    cout << " ------- " << endl;
}

void printCard4()
{
    cout << " ------- " << endl;
    cout << "| T     |" << endl;
    cout << "|       |" << endl;
    cout << "|   ♣   |" << endl;
    cout << "|       |" << endl;
    cout << "|     T |" << endl;
    cout << " ------- " << endl;
}



void printCard5()
{
    cout << " ------- " << endl;
    cout << "| 2 ♣   |" << endl;
    cout << "|       |" << endl;
    cout << "|       |" << endl;
    cout << "|       |" << endl;
    cout << "|   ♣ 2 |" << endl;
    cout << " ------- " << endl;
}
*/

/* Task 5 

bool lucknum(int num) {

    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < 3; i++) {
        sum1 += num % 10;
        num /= 10;

        sum2 += num % 10;
        num /= 10;
    }

    return sum1 == sum2;
}

*/

/* Task 6 

bool linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }

    return false;
}

*/

/* Task 7 

bool binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key) {
            return true;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return false;
}

*/

/* Task 8 
int num(int num) {
    int result = 0;
    int power = 1;

    for (num > 0; num /= 10;) {
        result += (num % 10) * power;
        power *= 2;
    }

    return result;
}

*/

/* Task 9 */

float averageNum(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return (float)sum / size;
}



int main()
{
    /* Task 1 
    int num;
    float exponent;
    cout << "Enter the base of the power: \n";
    cin >> num; 
    cout << "Enter exponent: \n";
    cin >> exponent;

    cout << sum(num, exponent);
    */

    /* Task 2

    int num1, num2;
    cout << "Enter 2 numbers: \n";
    cin >> num1 >> num2; 

    sum(num1, num2);
     */

    /* Task 3 

    int num1, num2;

    cout << "Enter two numbers(from - to): \n";
    cin >> num1 >> num2;

    for (int i = num1; i <= num2; i++)
    {
        if (num(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    */

    /* Task 4 

    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));

    int r = rand() % 5;

    if (r == 0) {
        printCard();
    }

    else if (r == 1) {
        printCard2();
    }
    else if (r == 2) {
        printCard3();
    }
    else if (r == 3) {
        printCard4();
    }
    else if (r == 4) {
        printCard5();
    }
*/

    /* Task 5


    int num;

    cout << "Enter a six-digit number: ";
    cin >> num;

    if (lucknum(num))
        cout << "Lucky number!" << endl;
    else
        cout << "Not lucky!" << endl;

    return 0;

     */

    /* Task 6 

    int arr[5] = { -32, 4, 0, 7, 8 };
    int key;

    cout << "Enter number: \n";
    cin >> key;

    if (linearSearch(arr, 5, key)) {
        cout << "Key found.\n";
    }
    else {
        cout << "Key isn't  found.\n";
    }

    return 0;

    */

    /* Task 7 

    int arr[5] = { 0, 6, 12, 22, 43 };
    int key;

    cout << "Enter number: \n";
    cin >> key;

    if (binarySearch(arr, 5, key)) {
        cout << "Key found.\n";
    }
    else {
        cout << "Key isn't  found.\n";
    }
    return 0;

    */

    /* Task 8 

cout << num(10) << endl;
cout << num(100) << endl;
cout << num(1100) << endl;
cout << num(1010) << endl;
cout << num(11111) << endl;
return 0;
*/

/* Task 9 */

    int arr[5] = { -62, 14, 9, 4, 0 };
    cout << averageNum(arr, 5);

    return 0;


}

