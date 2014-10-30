EXEC   = testGit
INCDIR = ./include
CXX    = g++
CFLAGS = -Wall -I$(INCDIR)

SOURCES = main.cc \
	  doCountSubstrings.cc \
	  doStringReverse.cc \
	  doStringSubstitute.cc \
	  doCountVowel.cc \
	  doWordCount.cc
OBJECTS = $(SOURCES:.cc=.o)

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(EXEC)

main.o: main.cc
	$(CXX) main.cc -c $(CFLAGS)

doStringReverse.o: doStringReverse.cc
	$(CXX) doStringReverse.cc -c $(CFLAGS) 

doStringSubstitute.o: doStringSubstitute.cc
	$(CXX) doStringSubstitute.cc -c $(CFLAGS) 

doCountSubstrings.o: doCountSubstrings.cc
	$(CXX) doCountSubstrings.cc -c $(CFLAGS) 

doCountVowel.o: doCountVowel.cc
	$(CXX) doCountVowel.cc -c $(CFLAGS) 

doWordCount.o: doWordCount.cc
	$(CXX) doWordCount.cc -c  $(CFLAGS) 

clean:
	rm -rf *.o $(EXEC)

