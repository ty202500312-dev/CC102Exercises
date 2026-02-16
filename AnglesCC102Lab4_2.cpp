#include <iostream>
using namespace std;

int main (){
    char cho;

    do{
        const int prod = 5;
        const int salePer = 4;

        double sales[prod][salePer]={0};
        int SalePerson, Product;
        double amount;
        char aga;

        do{
            cout << endl << "Enter the SalesPerson number (1-4): ";
            cin >> SalePerson;

            cout << endl << "Enter the Product number (1-5): ";
            cin >> Product;

            cout << endl << "Enter Amount: ";
            cin >> amount;

            sales[Product - 1][SalePerson - 1] += amount;

            cout << endl << "Add another Entry? (y/n):";
            cin >> aga;
        }while (aga == 'y' || aga == 'Y');

        cout << endl << "Product    ";
        for (int i = 0; i < salePer; i++)
            cout << "Sale" << i + 1 << "     ";
            cout <<"Total " << endl;

            double GraTot = 0;

            for (int j = 0; j < prod; j++){
                double rowTot = 0;
                cout << j + 1 << "     ";

                for (int k = 0; k < salePer; k++){
                    cout << sales[j][k] << "          ";
                    rowTot += sales[j][k];
                }

                cout << rowTot << endl;
                GraTot += rowTot;
            }

            cout << "Total: ";
            for (int k = 0; k < salePer; k++){
                double colTot = 0;
                for (int j; j < prod; j++){
                    colTot += sales[j][k];
                }
                cout << colTot << "    ";
            }

            cout << GraTot << endl;

            cout << endl << "Would u like to repeat? (y/n): ";
            cin >> cho;
        }while (cho == 'y' || cho == 'Y');

    return 0;
}
