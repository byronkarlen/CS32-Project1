//
//  Previous.h
//  CS32Project1
//
//  Created by Byron Karlen on 6/21/22.
//

#ifndef Previous_h
#define Previous_h

#include "globals.h"
class Arena;

class Previous
{
  public:
    Previous(int nRows, int nCols);
    bool dropACrumb(int r, int c);
    void showPreviousMoves() const;

  private:
    int m_nRows;
    int m_nCols;
    char m_previousArena[MAXROWS][MAXCOLS];
};

#endif /* Previous_h */
