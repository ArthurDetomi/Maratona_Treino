CC = g++
CFLAGS = -g -Wall -Wextra

%: %.cpp
	$(CC) $(CFLAGS) -o $@.out $<

clean:
	@echo 'Cleaning...'
	rm *.out
