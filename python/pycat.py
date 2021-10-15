#!/usr/bin/env python
import sys
import os


if len(sys.argv) > 1:
    try:
        file = open(sys.argv[1])
        text = file.read()
        file.close()
        print(text)

    except FileNotFoundError:
        print("\x1b[31m",sys.argv[1] + ' does not exist!')
else:
    print('\033[31m','ERROR: no filename entered! Please enter a filename to read!')
    exit(1)