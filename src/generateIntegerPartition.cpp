#include "generateIntegerPartition.hh"

thgip::generateIntegerPartition::generateIntegerPartition(int number) :
	_number(number)
{
}

thgip::generateIntegerPartition &thgip::generateIntegerPartition::compute()
{
  if (_number == 0)
    {
      _partitionNumber = 1;
      return *this;
    }
  _partitionNumber = computeRec(_number, _number - static_cast<unsigned int>(1)) + 1;
  return *this;
}

void thgip::generateIntegerPartition::print()
{
  std::cout << "Integer partition number of " << _number << " is: " << _partitionNumber << std::endl;
}

std::uint64_t thgip::generateIntegerPartition::computeRec(int number, unsigned int subsetNumber)
{
  if (number == 0)
    return 1;
  else if (number < 0 || subsetNumber == 0)
    return 0;

  auto searchIt = _cacheRes.equal_range(number);
  for (auto it = searchIt.first; it != searchIt.second; ++it)
    {
      if (it->second.first == subsetNumber)
	return it->second.second;
    }
  std::uint64_t tmp = computeRec(number, subsetNumber - 1) + computeRec(number - subsetNumber, subsetNumber);
  _cacheRes.insert(std::make_pair(number, std::make_pair(subsetNumber, tmp)));
  return tmp;
}