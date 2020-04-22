TARGET=process.o
obj-m:=$(TARGET)

#KERNEL=/home/linux/T3/linux-3.4-NanoPC-T3
KERNEL=/lib/modules/$(shell uname -r)/build
all:
	make -C $(KERNEL) M=$(shell pwd) modules
	chmod 777 *.ko
.PHONY:
	clean
clean:
	make -C $(KERNEL) M=$(shell pwd) clean 
                                                    



