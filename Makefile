all:main

poem1.o:poem1.txt
	ld -r -b binary $< -o $@

poem2.o:poem2.txt
	ld -r -b binary $< -o $@

main:main.cc poem1.o poem2.o
	g++ $^ -o $@ -O2
