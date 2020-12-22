CXXFLAGS := -std=c++11
main: main.o Student.o
	g++ $(CXXFLAGS) -o main main.o Student.o

main.o: main.cpp Student.h
	g++ $(CXXFLAGS) -c main.cpp

Student.o: Student.cpp Student.h
	g++ $(CXXFLAGS) -c Student.cpp

clean:
	-rm -f *.o
	-rm -f main
	-rm -f *~
