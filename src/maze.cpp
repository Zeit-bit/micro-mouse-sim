void CreateMaze()
{

  int cellCount = 4;
  int mazeLength = cellCount * 2 - 1;
  int matrix[mazeLength][mazeLength];

  for (int row = 0; row < mazeLength; row++)
  {
    for (int col = 0; col < mazeLength; col++)
    {
      if (row % 2 != 0 || col % 2 != 0)
      {
        matrix[row][col] = 1;
      }
      else
      {
        matrix[row][col] = 0;
      }
    }
  }
}