#ifndef TH_GENERATE_INTEGER_PARTITION_GENERATEINTEGERPARTITION_HH
#define TH_GENERATE_INTEGER_PARTITION_GENERATEINTEGERPARTITION_HH

#include <iostream>

namespace thgip {
  class generateIntegerPartition
  {
   private:
    int 		_number = 0;
    unsigned long 	_partitionNumber = 0;

   public:
    generateIntegerPartition(int number);

   public:
    generateIntegerPartition&	compute();
    void 			print();

   private:
    unsigned long computeRec(int n);
  };
}

#endif //TH_GENERATE_INTEGER_PARTITION_GENERATEINTEGERPARTITION_HH
