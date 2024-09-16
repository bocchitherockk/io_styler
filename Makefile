compiler = gcc
# compiler = tcc
# compiler = tcc

compile:
	@echo "Compiling..."
	$(compiler) demo.c io_styler.c -o demo
	@echo "Finished compiling."

run:
	./demo

pre:
	@echo "Preprocessing..."
	$(compiler) -E demo.c > demo.i
	@echo "Finished preprocessing."

clean:
	@echo "Cleaning..."
	@cleaning=false; \
	if [ -f ./demo ]; then rm ./demo; echo "removed ./demo"; cleaning=true; fi; \
	if [ -f ./demo.i ]; then rm ./demo.i; echo "removed ./demo.i"; cleaning=true; fi; \
	if [ "$$cleaning" = true ]; then echo "Finished cleaning."; else echo "Nothing to clean."; fi