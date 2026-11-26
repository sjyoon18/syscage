CC = cc
CPPFLAGS = -D_GNU_SOURCE
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -g

syscage: src/main.c
	$(CC) $(CPPFLAGS) $(CFLAGS) src/main.c -o syscage

.PHONY: clean

clean:
	rm -f syscage
