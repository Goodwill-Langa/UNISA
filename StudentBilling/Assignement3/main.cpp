#include <iostream>
#include <string>

using namespace std;

//Overloaded function declaration for first time and/or repeat enrollers
double calcFees(int firstTimeNum, double firstTimeModFees,int repeatNum, double repeatModFees);


// Overloaded function declaration for first time enrollers
double calcFees(int firstTimeNum, double firstTimeModFees);



int main() {
    int numFirstTimeMod;
    double feePerFirstTimeMod;
    char response;
    int numRepeatMod = 0;
    double feePerRepeatMod = 0.0;
    double totalAmount;

    cout << endl;
    cout << "Enter the number of modules enrolled for the first time: ";
    cin >> numFirstTimeMod;

    cout << "Enter the fee per module for modules enrolled for the first time: ";
    cin >> feePerFirstTimeMod;

    cout << "Does the student repeat any modules? (Y/N): ";
    cin >> response;

    if (response == 'Y' || response == 'y')
        {
        cout << "Enter the number of modules repeated: ";
        cin >> numRepeatMod;

        cout << "Enter the fee per module for repeated modules: ";
        cin >> feePerRepeatMod;

        //Invoke first time and/repeat enrollers function
        totalAmount = calcFees(numFirstTimeMod, feePerFirstTimeMod, numRepeatMod, feePerRepeatMod);
    }
    else
    {
        //Invoke first time enrollers only function
        totalAmount = calcFees(numFirstTimeMod, feePerFirstTimeMod);
    }

    cout << "The total tuition fees for the student are: " << totalAmount << endl;

    return 0;
}

// Overloaded function to calculate fees for the first time only enrollers
double calcFees(int firstTimeNum, double firstTimeModFees)
{
    double firstTimeFees = firstTimeNum * firstTimeModFees;

    return firstTimeFees;
}

// Overloaded function to calculate fees for first time and/or repeat enrollers
double calcFees(int firstTimeNum, double firstTimeModFees,int repeatModNum, double feesRepeatMod)
{
                    double firstTimeFees = firstTimeNum * firstTimeModFees;
                    double repeatModuleFees = repeatModNum * feesRepeatMod;
    return (repeatModuleFees + firstTimeFees);
}
