/******************************************************************************

Calcule a subtração entre duas matrizes A e B.


*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{

    int mA[3][3] = { {4,5,6},
                        {2,8,6},                
                        {7,90,2}};
    
    int mB[3][3] = { {9,1,0},
                        {2,4,8},                
                        {5,5,8}};
                        
    int conta[3][3];
    
    cout << "A subtração é " << endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
             conta[i][j] = mA[i][j] - mB[i][j];
             cout << conta[i][j] << " ";


            
        }
    }
    

    

    return 0;
}


