we just extract the disk image, analyze it with mmls and then find the size of the linux
giving the proper input, we get the flag

$ mmls -a disk.img
flag: picoCTF{mm15_f7w!}

we found the disk image allocated size to be : 202752
we can then use this one-liner to get the output:
        echo "202752" | nc saturn.picoctf.net 55548 | grep -oE "picoCTF{.*?}" --color=none
