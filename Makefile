target := strmnt
flags := --std=c99 -Wall -Werror -Wextra -Wpedantic -O3 -g0 --pedantic

all: $(target)

$(target): main.c
	gcc $(flags) $< -o $@

clean:
	rm -fv $(target)
