#include "generateIntegerPartition.hh"

thgip::generateIntegerPartition::generateIntegerPartition(int number) :
	_number(number)
{
}

thgip::generateIntegerPartition &thgip::generateIntegerPartition::compute()
{
  _partitionNumber = computeRec(_number);
  return *this;
}

void thgip::generateIntegerPartition::print()
{
  std::cout << "Integer partition number of " << _number << " is: " << _partitionNumber << std::endl;
}

unsigned long thgip::generateIntegerPartition::computeRec(int number)
{
  if (number <= 0)
    return 1;
  unsigned long sum = 0;
  int jo = number - 1;
  unsigned long k = 2;
  while (0 <= jo)
    {
      unsigned long tmp = computeRec(jo);
      if (k % 2 == 1)
	jo -= k;
      else
	jo -= k / 2;
      if ((k / 2) % 2 == 1)
	sum += tmp;
      else
	sum -= tmp;
      k += 1;
    }
  return sum;
}