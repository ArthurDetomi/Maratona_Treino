CC = gcc
CFLAGS = -Wall -Wextra -g

%: %.c
	$(CC) $(CFLAGS)  -o $@.out $<  -lm 

clean:
	@echo 'Cleaning...'
	rm *.out
