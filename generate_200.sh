#!/bin/bash

i="0"
while [ $i -le 200 ]
do
    $1 $i
    i=$[i+1]
done