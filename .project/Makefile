CC := g++
SRCDIR := src
OBJDIR := build
BINDIR := build

MAIN := program/main.cpp

SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
TSTSOURCES := $(shell find $(TSTDIR) -type f -name *.$(SRCEXT))

CFLAGS := -g -Wall -O3 -std=c++11
INC := -I include/

$(OBJDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<

main: $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) $(INC) $(MAIN) $^ -o $(BINDIR)/main

all: main

run: main
	$(BINDIR)/main

clean:
	$(RM) -r $(OBJDIR)/* $(BINDIR)/*

.PHONY: clean coverage