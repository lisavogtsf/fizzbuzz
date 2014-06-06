# Makefile for fizzbuzz

fizzbuzz: fizzbuzz.c
	clang -ggdb3 -O0 -std=c99 -Wall -Werror -o fizzbuzz fizzbuzz.c

