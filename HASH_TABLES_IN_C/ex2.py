#!/usr/bin/python3
def ascii():
    for i in range(256):
        print("The character: {} and its ascii is : {}".format(chr(i), i))


def main():
    ascii()

main()
