
test-good: Demand.o
	g++ build/Demand.o src/Good.cpp test/Good.test.cpp -o build/test/good-test
	./build/test/good-test

Demand.o:
	g++ -c src/Demand.cpp -o build/Demand.o