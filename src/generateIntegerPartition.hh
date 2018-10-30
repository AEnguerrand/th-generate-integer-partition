#ifndef TH_GENERATE_INTEGER_PARTITION_GENERATEINTEGERPARTITION_HH
#define TH_GENERATE_INTEGER_PARTITION_GENERATEINTEGERPARTITION_HH

#include <iostream>
#include <unordered_map>
#include <algorithm>

namespace thgip {
  class generateIntegerPartition
  {
   private:
    int 									_number = 0;
    std::uint64_t _partitionNumber = 0;
    std::unordered_multimap<int, std::pair<unsigned int, std::uint64_t >> _cacheRes;

   public:
    explicit generateIntegerPartition(int number);

   public:
    generateIntegerPartition&	compute();
    void 			print();

   private:
    std::uint64_t computeRec(int number, unsigned int subsetNumber);
  };
}

#endif //TH_GENERATE_INTEGER_PARTITION_GENERATEINTEGERPARTITION_HH
