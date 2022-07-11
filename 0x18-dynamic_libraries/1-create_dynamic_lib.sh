#!/bin/bash

gcc *.c -c fpPIC
gcc *.o -shared -o liball.so
