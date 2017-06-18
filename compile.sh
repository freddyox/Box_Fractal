#!/bin/bash

echo "Compiling..."
echo " "
cd src/

g++ -c main.cpp Fractal.cpp


echo "Linking..."
echo " "

if [ -e main.cpp~ ];
then
    rm main.cpp~
fi

mv *.o ../linkers
cd ../linkers

g++ main.o Fractal.o -o fractal -lsfml-graphics -lsfml-window -lsfml-system

mv fractal ../
cd ../

if [ -e compile.sh~ ] ;
then 
    rm compile.sh~ 
fi

cd include/
if [ -e *.hh~ ];
then
    rm *.hh~
fi

cd ..
echo "Executing..."
echo " "
./fractal

