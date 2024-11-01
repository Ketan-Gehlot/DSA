#include <iostream>
#include <string>

int main() {
    // Prices of items
    int pricePen = 5, pricePencil = 10, priceEraser = 3;
    int priceWaterBottle = 11, priceTiffinBox = 15;
    int priceNotebook = 7, priceTextbook = 8;

    // Quantities for each item
    int qtyPen = 0, qtyPencil = 0, qtyEraser = 0;
    int qtyWaterBottle = 0, qtyTiffinBox = 0;
    int qtyNotebook = 0, qtyTextbook = 0;

    // Ask for stationery items
    std::cout << "Enter quantity of pens: ";
    std::cin >> qtyPen;
    std::cout << "Enter quantity of pencils: ";
    std::cin >> qtyPencil;
    std::cout << "Enter quantity of erasers: ";
    std::cin >> qtyEraser;

    // Calculate cost and GST for stationery (12%)
    int costStationery = (qtyPen * pricePen) + (qtyPencil * pricePencil) + (qtyEraser * priceEraser);
    double gstStationery = costStationery * 0.12;

    // Ask if user wants water bottles and tiffin boxes
    std::cout << "Do you want to buy water bottles and tiffin boxes? (yes/no): ";
    std::string response;
    std::cin >> response;

    int costWaterTiffin = 0;
    double gstWaterTiffin = 0;
    if (response == "yes" || response == "YES" || response == "Yes") {
        std::cout << "Enter quantity of water bottles: ";
        std::cin >> qtyWaterBottle;
        std::cout << "Enter quantity of tiffin boxes: ";
        std::cin >> qtyTiffinBox;

        costWaterTiffin = (qtyWaterBottle * priceWaterBottle) + (qtyTiffinBox * priceTiffinBox);
        gstWaterTiffin = costWaterTiffin * 0.18;
    }

    // Ask if user wants notebooks and textbooks
    std::cout << "Do you want to buy notebooks and textbooks? (yes/no): ";
    std::cin >> response;

    int costBooks = 0;
    double gstBooks = 0;
    if (response == "yes" || response == "YES" || response == "Yes") {
        std::cout << "Enter quantity of notebooks: ";
        std::cin >> qtyNotebook;
        std::cout << "Enter quantity of textbooks: ";
        std::cin >> qtyTextbook;

        costBooks = (qtyNotebook * priceNotebook) + (qtyTextbook * priceTextbook);
        gstBooks = costBooks * 0.05;
    }

    // Calculate total cost and GST
    int totalCost = costStationery + costWaterTiffin + costBooks;
    double totalGST = gstStationery + gstWaterTiffin + gstBooks;
    double finalAmount = totalCost + totalGST;

    // Display bill
    std::cout << "\n--- Bill Summary ---" << std::endl;
    std::cout << "Stationery Total: " << costStationery << " (GST 12%: " << gstStationery << ")" << std::endl;
    std::cout << "Water & Tiffin Total: " << costWaterTiffin << " (GST 18%: " << gstWaterTiffin << ")" << std::endl;
    std::cout << "Books Total: " << costBooks << " (GST 5%: " << gstBooks << ")" << std::endl;
    std::cout << "Total Cost (Without GST): " << totalCost << std::endl;
    std::cout << "Total GST: " << totalGST << std::endl;
    std::cout << "Final Amount (With GST): " << finalAmount << std::endl;

    return 0;
}

