#!/bin/bash
cd ../output/U1
echo "U1:a.txt: $(cat a.txt)"
cd U2
echo "U2:a.txt: $(cat a.txt)" 
echo "U2:b.txt: $(cat  b.txt)"
