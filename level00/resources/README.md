To begin, we searched for all files belonging to user flag00
> find / -type f -user flag00 -ls 2>/dev/null

We have found the file ``/usr/sbin/john``

By using the command
> cat /usr/sbin/john
we have found a sentence coded with the caesar code. By decrypting it with an offset of <-11 (->15), that gave us the sentence ``nottoohardhere``.

We used the password to pass in sudo mode with the flag00 account
> su flag00

Then we were able to use ``getflag``.
