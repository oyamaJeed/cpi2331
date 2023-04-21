# TARGET NAME
TARGET := thread1

# OBJECT FILES
OBJS := thread1.o

# SOURCE FILES
SRCS := $(OBJS:%.o=%.c)

# COMPILER TYPE
CC := gcc

# COMPILER OPTION
CFLAGS := -g -Wall -Wextra -DDEEBUG=1

# DYNAMIC LIBRARY
# LDFLAGS := -lpthread

# MAKE ALL (PHONY TARGET)
.PHONY: all
all: $(TARGET)

# LINK OBJECTS
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDFLAGS)

# COMPILE SOURCES
./%.o: ./%.c
	$(CC) $(CFLAGS) -c $<

# UPDATE HEADER FILE
#$(OBJS): *.h

# CLEAN FILES (PHONY TARGET)
.PHONY: clean
clean:
	rm -f *.o *~ $(TARGET)
