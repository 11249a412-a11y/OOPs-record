#include<iostream>
#include<string>
using namespace std;

class ElectricityBill {
private:
    int consumer_no;
    string consumer_name;
    int prev_reading, curr_reading;
    string connection_type;
    int units;
    float amount;

public:
    void inputDetails() {
        cout << "Enter consumer number: ";
        cin >> consumer_no;
        cin.ignore();  
        cout << "Enter consumer name: ";
        getline(cin, consumer_name);  
        cout << "Enter previous month reading: ";
        cin >> prev_reading;
        cout << "Enter current month reading: ";
        cin >> curr_reading;
        cout << "Enter connection type (domestic/commercial): ";
        cin >> connection_type;
        units = curr_reading - prev_reading;
    }

    void calculateBill() {
        amount = 0;
        int u = units;

        if (connection_type == "domestic") {
            if (u <= 100) {
                amount = u * 1.0;
            }
            else if (u <= 500) {
                amount = 100 * 1.0 + (u - 100) * 2.5;
            }
            else {
                amount = 100 * 1.0 + 400 * 2.5 + (u - 500) * 4.0;
            }
        }
        else if (connection_type == "commercial") {
            if (u <= 100) {
                amount = u * 2.0;
            }
            else if (u <= 500) {
                amount = 100 * 2.0 + (u - 100) * 3.5;
            }
            else {
                amount = 100 * 2.0 + 400 * 3.5 + (u - 500) * 5.0;
            }
        } else {
            cout << "Invalid connection type entered!" << endl;
        }
    }

    void displayBill() {
        cout << "\n-------- Electricity Bill --------" << endl;
        cout << "Consumer Number: " << consumer_no << endl;
        cout << "Consumer Name: " << consumer_name << endl;
        cout << "Connection Type: " << connection_type << endl;
        cout << "Current Reading: " << curr_reading << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Amount: Rs " << amount << endl;
    }
};

int main() {
    ElectricityBill eb;
    eb.inputDetails();
    eb.calculateBill();
    eb.displayBill();
    return 0;
}