app: CProducts.o main.o
	g++ CProducts.o main.o -o app

CProducts.o: CProducts.cpp
	g++ -c CProducts.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o app