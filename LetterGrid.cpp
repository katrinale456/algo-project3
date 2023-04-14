#include "LetterGrid.h"

void LetterGrid::readGrid(string file) {
	ifstream fin;
	fin.open(file);
	string line;
	string letter;
	
	fin >> row >> col;	
	
	mat = new char*[row];
	for (int i = 0; i < row; i++) {
		mat[i] = new char[col];
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			fin >> mat[i][j];
		}
	}
	fin.close();
}

void LetterGrid::printGrid() {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << mat[i][j] << " ";
			if (j == (col-1)) {
				cout << endl;
			}
		}
	}
}

int LetterGrid::getRow() {
	return row;
}

int LetterGrid::getCol() {
	return col;
}

char** LetterGrid::getMat() {
	return mat;
}

