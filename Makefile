COMPILER = g++
EXTENSION = exe

default:
	$(COMPILER) cursedfizzbuzz.cpp -trigraphs -o regular_output.$(EXTENSION)