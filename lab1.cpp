
#include <iostream>
#include <tuple>
using namespace std;





int LowerT(int row, int col, int A[3][3]){
 int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i < j)
            {
                cout << "0" << " ";
            }
            else
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}     


int main()
     {
   int A[3][3] = {{5, 52, 3}, 
                        {47, 55, 6}, 
                        {2, 8, 8}};
    int row = 3, col = 3;
      
    lowerT(matrix, row, col);
 
int Array1[8][8];
  for(int i = 0; i<8; i++){
    for(int j = 0; j < 8; j++){
       if(j <= i){
         Array1[i][j] = rand()%500;
     }
       else{
    Array1[i][j] = -1;
     }
 }
  for(int q = 0; q < 1; t++){
 
  for(int l = 0; l < 20; l++){
  cout << A[q][l]<< endl;
   }
   }
  }
     for(int i = 0; i < 8; i++){
   for(int j = 0; j < 8; j++){
   cout << Array1[i][j] << endl;
 }
}

    return 0;
}
