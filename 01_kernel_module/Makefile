KERNEL_VERSION=$(shell uname -r)

obj-m += simple.o

all:
	make -C /lib/modules/${KERNEL_VERSION}/build M=${PWD} modules

clean:
	make -C /lib/modules/${KERNEL_VERSION}/build M=${PWD} clean












