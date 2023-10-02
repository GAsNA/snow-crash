## Step 1
> find / -type f -user flag00 -ls 2>/dev/null

We searched for all files belonging to user flag00

## Step 2
We have found the file ``/usr/sbin/john``.

## Step 3
> cat /usr/sbin/john

By using this command, we have found a sentence coded with the caesar code.
By decrypting it with an offset of <-11 (->15), that gave us the sentence ``nottoohardhere``.

## Step 4
> su flag00

We used the password to pass in sudo mode with the flag00 account.

## Step 5
Then we were able to use ``getflag``.
