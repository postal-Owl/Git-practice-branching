double my_pow(double x, unsigned int y)
{
  double result;
  
  for (int i = 0; i < y; i++)
    result *= x;
  
  return result;
}
