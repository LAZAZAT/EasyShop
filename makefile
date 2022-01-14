app: CProducts.o CClient.o main.o
	g++ CProducts.o CClient.o main.o -o app

CProducts.o: CProducts.cpp
	g++ -c CProducts.cpp

CClient.o: CClient.cpp
	g++ -c CClient.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o app