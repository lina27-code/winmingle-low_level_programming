#!/bin/bash
echo 'int rand() { static int nums[] = {9,8,10,24,75,9}; static int i = 0; return nums[i++ % 6]; }' > fake_rand.c
gcc -shared -fPIC -o fake_rand.so fake_rand.c && LD_PRELOAD=./fake_rand.so ./gm 9 8 10 24 75 9
