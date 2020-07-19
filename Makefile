target := main
flags := -std=c99

all: $(target)

$(target): $(target).c
	gcc $(flags) $< -o $@

clean:
	rm -fv $(target)
