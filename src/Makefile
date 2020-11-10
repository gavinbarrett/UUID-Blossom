uuid: uuid.o
	g++ -Wall -Werror -std=c++11 -lsodium -o uuid uuid.o

uuid.o: uuid.cc
	g++ -Wall -Werror -std=c++11 -lsodium -c uuid.cc

clean:
	rm uuid.o uuid
