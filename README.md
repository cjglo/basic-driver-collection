
# My Driver Collection

Just a series of drivers I built overtime (mostly in C, but may do a few in Rust and Zig for the challenge; I'll label those with zig or rust in the name to make it clear). 

## Commands to Build

Mostly for my future self, but maybe for a friend browsing:

Run the make command to build (will use uname to grab the Makefile to build a kernel module) with:
```
make -C /lib/modules/$(uname -r)/build M=$PWD modules
``` 

That will create a .ko file which is a kernel object.  This is inserted into modules with `insmod`.
```
sudo insmod ./<KERNAL OBJECT NAME INCLUDING EXTENSION>
```

You can then confirm it was loaded with:
```
lsmod
```

You remove with
```
sudo rmmod <NAME OF MODULE> 
```

## Directory

### hellodriver

Basic Hello World type driver.  Goal is to create init and exit functions and connect to kernel.  A device driver that essentailly prints hello.
