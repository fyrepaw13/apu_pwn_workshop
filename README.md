# apu_pwn_workshop

### Tools needed

You will need a Kali Linux VM, download all the files above along with the following tools

### Gdb-gef

```sh
bash -c "$(curl -fsSL https://gef.blah.cat/sh)"
```

You can use vanilla gdb or pwndbg, whichever you are more comfortable with

### ROPGadget

```sh
sudo -H python3 -m pip install ROPgadget
```

### pwntools

```sh
python3 -m pip install --upgrade pwntools
```

### checksec

```sh
sudo apt install checksec
```
