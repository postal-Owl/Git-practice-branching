// without int main()
double my_pow(double x, int y)
{
  double result;
  
  if (y < 0)
     y = -y;
  
  for (int i = 0; i < y; i++)
    result *= x;
  
  return result;
}
