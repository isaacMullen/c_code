CC = gcc  # Compiler to use
CFLAGS = -Wall  # Compiler flags (e.g., show all warnings)

functions: functions.c
	$(CC) $(CFLAGS) functions.c -o functions


clean:
	rm -f functions	