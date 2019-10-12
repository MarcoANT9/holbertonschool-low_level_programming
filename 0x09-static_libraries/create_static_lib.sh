#!/bin/bash

gcc -c *.c | ar -cvq liball.a *.o | ranlib liball.a
