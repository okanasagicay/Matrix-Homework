#include <array>
#include <iostream>

const int MAXNUMBEROFROWS = 100;
const int MAXNUMBEROFCOLUMNS = 100;

void printArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int nrrows, int nrcolumns) {
    
    for (int i = 0; i < nrrows; i++) {
        for (int j = 0; j < nrcolumns; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl; 
    }
}

void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int nrrows, int nrcolumns) {
    
    std::cout << "Please enter " << nrrows * nrcolumns << " elements (row by row):" << std::endl;

    for (int i = 0; i < nrrows; i++) {
        std::cout << "Row " << (i + 1) << " (" << nrcolumns << " numbers): ";
        for (int j = 0; j < nrcolumns; j++) {
            std::cin >> arr[i][j];
        }
    }
}

int main() {
    std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> matrix;

    std::cout << "MATRIX INPUT" << std::endl;
    fillArray(matrix, 5, 4); 

    std::cout << "\nMATRIX OUTPUT" << std::endl;
    printArray(matrix, 5, 4);

    return 0;
}
