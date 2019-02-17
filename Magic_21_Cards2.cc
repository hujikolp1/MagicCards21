#include <iostream>
using namespace std;

int main ()
{

  cout << "Pick a card 1 to 21..." << endl;
  cout << "Press 0 when you've picked..." << endl;
  int user_input1;
  while (user_input1 != 0)
  {
    cin >> user_input1;
  }

  const int rows = 7;
  const int colmns = 3;
  int Array[rows][colmns] =
  {
    {14,10,20},
    {8,19,2},
    {13,9,7},
    {15,3,11},
    {17,21,1},
    {4,12,6},
    {5,16,18}
  };


  cout << "What row is your number in? 1, 2, or 3?" << endl;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < colmns; j++)
    {                                       // PRINT ENTIRE ARRAY
      cout << "'" << Array[i][j] << "'";
    }
    cout << endl;
  }

  int user_input2;
  cin >> user_input2;
  cout << "You picked row: " << user_input2 << endl;
  cout << "Reshuffle......" << endl;

  int NewArray[rows][colmns];

  // PUT INTO MIDDLE

  if (user_input2 == 1)
  {

    NewArray[2][1] = Array[0][0];
    NewArray[2][2] = Array[1][0];
    NewArray[3][0] = Array[2][0];
    NewArray[3][1] = Array[3][0]; // SET COLMN 1 to 8-14
    NewArray[3][2] = Array[4][0];
    NewArray[4][0] = Array[5][0];
    NewArray[4][1] = Array[6][0];

    NewArray[0][0] = Array[0][1];
    NewArray[0][1] = Array[1][1];
    NewArray[0][2] = Array[2][1];
    NewArray[1][0] = Array[3][1]; // SET COLMN 2 to 1-7
    NewArray[1][1] = Array[4][1];
    NewArray[1][2] = Array[5][1];
    NewArray[2][0] = Array[6][1];

    NewArray[4][2] = Array[0][2];
    NewArray[5][0] = Array[1][2];
    NewArray[5][1] = Array[2][2];
    NewArray[5][2] = Array[3][2]; // SET COLMN 3 to 15-21
    NewArray[6][0] = Array[4][2];
    NewArray[6][1] = Array[5][2];
    NewArray[6][2] = Array[6][2];
  }

  if (user_input2 == 2)
  {

    NewArray[2][1] = Array[0][1];
    NewArray[2][2] = Array[1][1];
    NewArray[3][0] = Array[2][1];
    NewArray[3][1] = Array[3][1]; // SET COLMN 2 to 8-14
    NewArray[3][2] = Array[4][1];
    NewArray[4][0] = Array[5][1];
    NewArray[4][1] = Array[6][1];

    NewArray[0][0] = Array[0][0];
    NewArray[0][1] = Array[1][0];
    NewArray[0][2] = Array[2][0];
    NewArray[1][0] = Array[3][0]; // SET COLMN 1 to 1-7
    NewArray[1][1] = Array[4][0];
    NewArray[1][2] = Array[5][0];
    NewArray[2][0] = Array[6][0];

    NewArray[4][2] = Array[0][2];
    NewArray[5][0] = Array[1][2];
    NewArray[5][1] = Array[2][2];
    NewArray[5][2] = Array[3][2]; // SET COLMN 3 to 15-21
    NewArray[6][0] = Array[4][2];
    NewArray[6][1] = Array[5][2];
    NewArray[6][2] = Array[6][2];
  }

  if (user_input2 == 3)
  {

    NewArray[2][1] = Array[0][2];
    NewArray[2][2] = Array[1][2];
    NewArray[3][0] = Array[2][2];
    NewArray[3][1] = Array[3][2]; // SET COLMN 3 to 8-14
    NewArray[3][2] = Array[4][2];
    NewArray[4][0] = Array[5][2];
    NewArray[4][1] = Array[6][2];

    NewArray[0][0] = Array[0][0];
    NewArray[0][1] = Array[1][0];
    NewArray[0][2] = Array[2][0];
    NewArray[1][0] = Array[3][0]; // SET COLMN 1 to 1-7
    NewArray[1][1] = Array[4][0];
    NewArray[1][2] = Array[5][0];
    NewArray[2][0] = Array[6][0];

    NewArray[4][2] = Array[0][1];
    NewArray[5][0] = Array[1][1];
    NewArray[5][1] = Array[2][1];
    NewArray[5][2] = Array[3][1]; // SET COLMN 2 to 15-21
    NewArray[6][0] = Array[4][1];
    NewArray[6][1] = Array[5][1];
    NewArray[6][2] = Array[6][1];
  }

  cout << "What row is your number in? 1, 2, or 3?" << endl;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < colmns; j++)
    {                                       // PRINT ENTIRE ARRAY
      cout << "'" << NewArray[i][j] << "'";
    }
    cout << endl;
  }

  int user_input3;
  cin >> user_input3;
  cout << "You picked row: " << user_input3 << endl;
  cout << "Reshuffle......" << endl;

  int LastArray[rows][colmns];

  // PUT INTO MIDDLE AGAIN

  if (user_input3 == 1)
  {
    LastArray[2][1] = NewArray[0][0];
    LastArray[2][2] = NewArray[1][0];
    LastArray[3][0] = NewArray[2][0];
    LastArray[3][1] = NewArray[3][0]; // SET COLMN 1 to 8-14
    LastArray[3][2] = NewArray[4][0];
    LastArray[4][0] = NewArray[5][0];
    LastArray[4][1] = NewArray[6][0];

    LastArray[0][0] = NewArray[0][1];
    LastArray[0][1] = NewArray[1][1];
    LastArray[0][2] = NewArray[2][1];
    LastArray[1][0] = NewArray[3][1]; // SET COLMN 2 to 1-7
    LastArray[1][1] = NewArray[4][1];
    LastArray[1][2] = NewArray[5][1];
    LastArray[2][0] = NewArray[6][1];

    LastArray[4][2] = NewArray[0][2];
    LastArray[5][0] = NewArray[1][2];
    LastArray[5][1] = NewArray[2][2];
    LastArray[5][2] = NewArray[3][2]; // SET COLMN 3 to 15-21
    LastArray[6][0] = NewArray[4][2];
    LastArray[6][1] = NewArray[5][2];
    LastArray[6][2] = NewArray[6][2];
  }

  if (user_input3 == 2)
  {
    LastArray[2][1] = NewArray[0][1];
    LastArray[2][2] = NewArray[1][1];
    LastArray[3][0] = NewArray[2][1];
    LastArray[3][1] = NewArray[3][1]; // SET COLMN 2 to 8-14
    LastArray[3][2] = NewArray[4][1];
    LastArray[4][0] = NewArray[5][1];
    LastArray[4][1] = NewArray[6][1];

    LastArray[0][0] = NewArray[0][0];
    LastArray[0][1] = NewArray[1][0];
    LastArray[0][2] = NewArray[2][0];
    LastArray[1][0] = NewArray[3][0]; // SET COLMN 1 to 1-7
    LastArray[1][1] = NewArray[4][0];
    LastArray[1][2] = NewArray[5][0];
    LastArray[2][0] = NewArray[6][0];

    LastArray[4][2] = NewArray[0][2];
    LastArray[5][0] = NewArray[1][2];
    LastArray[5][1] = NewArray[2][2];
    LastArray[5][2] = NewArray[3][2]; // SET COLMN 3 to 15-21
    LastArray[6][0] = NewArray[4][2];
    LastArray[6][1] = NewArray[5][2];
    LastArray[6][2] = NewArray[6][2];
  }

  if (user_input3 == 3)
  {
    LastArray[2][1] = NewArray[0][2];
    LastArray[2][2] = NewArray[1][2];
    LastArray[3][0] = NewArray[2][2];
    LastArray[3][1] = NewArray[3][2]; // SET COLMN 3 to 8-14
    LastArray[3][2] = NewArray[4][2];
    LastArray[4][0] = NewArray[5][2];
    LastArray[4][1] = NewArray[6][2];

    LastArray[0][0] = NewArray[0][0];
    LastArray[0][1] = NewArray[1][0];
    LastArray[0][2] = NewArray[2][0];
    LastArray[1][0] = NewArray[3][0]; // SET COLMN 1 to 1-7
    LastArray[1][1] = NewArray[4][0];
    LastArray[1][2] = NewArray[5][0];
    LastArray[2][0] = NewArray[6][0];

    LastArray[4][2] = NewArray[0][1];
    LastArray[5][0] = NewArray[1][1];
    LastArray[5][1] = NewArray[2][1];
    LastArray[5][2] = NewArray[3][1]; // SET COLMN 2 to 15-21
    LastArray[6][0] = NewArray[4][1];
    LastArray[6][1] = NewArray[5][1];
    LastArray[6][2] = NewArray[6][1];
  }

  cout << "What row is your number in? 1, 2, or 3?" << endl;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < colmns; j++)
    {                                       // PRINT ENTIRE ARRAY
      cout << "'" << LastArray[i][j] << "'";
    }
    cout << endl;
  }

  int user_input4;
  cin >> user_input4;
  cout << "You picked row: " << user_input4 << endl;

  if (user_input4 == 1)
  {
    cout << "Your card is: " << LastArray[3][0] << endl;
  }
  if (user_input4 == 2)
  {
    cout << "Your card is: " << LastArray[3][1] << endl;
  }
  if (user_input4 == 3)
  {
    cout << "Your card is: " << LastArray[3][2] << endl;
  }

  cout << endl << "Next time write this program with a nested loop to switch arrays," << endl;
  cout << "not a discrete algorithm." << endl;

}
