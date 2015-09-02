
TOP=HelloWorld

all: $(TOP)

$(TOP): $(TOP).o
	gcc -g -o $(TOP) $(TOP).o

$(TOP).o: $(TOP).c
	gcc -g -c $(TOP).c

clean:
	rm -f $(TOP).o $(TOP).exe $(TOP)
