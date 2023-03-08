//
//  Previous.cpp
//  CS32Project1
//
//  Created by Byron Karlen on 6/21/22.
//

#include "Previous.h"
#include <iostream>
using namespace std;

Previous::Previous(int nRows, int nCols){
    m_nRows = nRows;
    m_nCols = nCols;
    //Fill in the previous "arena" with dots
    for(int i = 0; i < MAXROWS; i++){
        for(int j = 0; j < MAXCOLS; j++){
            m_previousArena[i][j] = '.';
        }
    }
}

bool Previous::dropACrumb(int r, int c){
    //If the r or c is not inbounds
    if(r-1 < 0 || r-1 > m_nRows || c-1 < 0 || c-1 > m_nCols)
        return false;
    //If a crumb has not yet been dropeed at the current location
    if(m_previousArena[r-1][c-1] < 'A')
        m_previousArena[r-1][c-1] = 'A';
    //If a crumb has been dropped (and less than 26 times) increment the character
    else if (m_previousArena[r-1][c-1] <= 'Z'){
        m_previousArena[r-1][c-1]++;
    }
    return true;
}

void Previous::showPreviousMoves() const{
    //Clear the screen
    clearScreen();
    
    //Print out the previous "arena"
    for(int i = 0; i < m_nRows; i++){
        for(int j = 0; j < m_nCols; j++){
            cout << m_previousArena[i][j];
        }
        cout << endl;
    }
    cout << endl;
}



