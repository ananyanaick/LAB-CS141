#!/bin/sh
echo "What is your name"
read NAME
mkdir $NAME
cd $NAME
touch $NAME.cpp 
#Answer for ques.2 starts here
for i in 1 2 3 4 5
do
touch $NAME$i.cpp
done
