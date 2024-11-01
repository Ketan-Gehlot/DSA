#include <iostream>
#include <string>
using namespace std;

int main() {
    int pricePen = 5, pricePencil = 10, priceEraser = 3;
    int priceWaterBottle = 11, priceTiffinBox = 15;
    int priceNotebook = 7, priceTextbook = 8;

    int qtyPen = 0, qtyPencil = 0, qtyEraser = 0;
    int qtyWaterBottle = 0, qtyTiffinBox = 0;
    int qtyNotebook = 0, qtyTextbook = 0;


    cout << "Enter quantity of pens: ";
    cin >> qtyPen;
    cout << "Enter quantity of pencils: ";
    cin >> qtyPencil;
    cout << "Enter quantity of erasers: ";
    cin >> qtyEraser;

    int costStationery = (qtyPen * pricePen) + (qtyPencil * pricePencil) + (qtyEraser * priceEraser);
    double gstStationery = costStationery * 0.12;


    cout << "Do you want to buy water bottles and tiffin boxes? (yes/no): ";
    string response;
    cin >> response;

    int costWaterTiffin = 0;
    double gstWaterTiffin = 0;
    if (response == "yes" || response == "YES" || response == "Yes") {
        cout << "Enter quantity of water bottles: ";
        cin >> qtyWaterBottle;
        std::cout << "Enter quantity of tiffin boxes: ";
        cin >> qtyTiffinBox;

        costWaterTiffin = (qtyWaterBottle * priceWaterBottle) + (qtyTiffinBox * priceTiffinBox);
        gstWaterTiffin = costWaterTiffin * 0.18;
    }

    cout << "Do you want to buy notebooks and textbooks? (yes/no): ";
    cin >> response;

    int costBooks = 0;
    double gstBooks = 0;
    if (response == "yes" || response == "YES" || response == "Yes") {
        cout << "Enter quantity of notebooks: ";
        cin >> qtyNotebook;
        cout << "Enter quantity of textbooks: ";
        cin >> qtyTextbook;

        costBooks = (qtyNotebook * priceNotebook) + (qtyTextbook * priceTextbook);
        gstBooks = costBooks * 0.05;
    }

    int totalCost = costStationery + costWaterTiffin + costBooks;
    double totalGST = gstStationery + gstWaterTiffin + gstBooks;
    double finalAmount = totalCost + totalGST;

    
    cout << "\n--- Bill Summary ---" << std::endl;
    cout << "Stationery Total: " << costStationery << " (GST 12%: " << gstStationery << ")" << std::endl;
    cout << "Water & Tiffin Total: " << costWaterTiffin << " (GST 18%: " << gstWaterTiffin << ")" << std::endl;
    cout << "Books Total: " << costBooks << " (GST 5%: " << gstBooks << ")" << std::endl;
    cout << "Total Cost (Without GST): " << totalCost << std::endl;
    cout << "Total GST: " << totalGST << std::endl;
    cout << "Final Amount (With GST): " << finalAmount << std::endl;

    return 0;
}

