ABC.exe:main.o bigc.o fact1.o
        gcc -o ABC.exe main.o bigc.o fact1.o
main.o:main.c
        gcc -c main.c
bigc.o:bigc.c
        gcc -c bigc.c
fact1.o:fact1.c
        gcc -c fact1.c
