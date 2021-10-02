CXX=g++
CXXFLAGS=-Wall -Werror

all: esr

clean:
	-rm -f esr *.o

esr: main.o
	$(CXX) -o esr $^

install: esr
	cp esr /usr/local/bin

.cc.o:
	$(CXX) $(CXXFLAGS) -c $<


