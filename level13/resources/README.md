## Step 1
> ls -l ~

There was one file, an executable, ``level13``. At the execution, we saw that it were waiting for an uid 4242.

## Step 2
> gdb level13

> disas main

```
   0x08048595 <+9>:	call   0x8048380 <getuid@plt>
   0x0804859a <+14>:	cmp    $0x1092,%eax
```

It used ``getuid`` and compared register ``eax`` to ``0x1092``.

## Step 3
> b *0x0804859a

We made a breakpoint one the second line to stop the program after the ``getuid`` but before the comparision.

## Step 4
> r

> set $eax=0x1092

> c

With that, we were able to set the value of register eax to 4242, and pass the rest of the program. The flag has been displayed.
