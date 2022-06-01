.PHONY:build clean rebuild run greet
greet:
	@echo "Terminating make - please specify target explicitly"
	@echo "    build   : fast rebuild / build"
	@echo "    rebuild : full rebuild"
	@echo "    run     : run after fast rebuild / build"
	@echo "    clean   : perform full clean"
build: main
rebuild:clean main
run:main
	./main
clean:
	rm -rvf *.o main
main:main.o typedef.o input.o processing.o print.o
	gcc -o main main.o typedef.o input.o processing.o print.o
main.o:main.c typedef.h input.h processing.h print.h 
	gcc -c -o main.o main.c
typedef.o:typedef.h typedef.c
	gcc -c -o typedef.o typedef.c
input.o:input.c typedef.h
	gcc -c -o input.o input.c
processing.o:processing.c typedef.h
	gcc -c -o processing.o processing.c
print.o:print.c typedef.h
	gcc -c -o print.o print.c

