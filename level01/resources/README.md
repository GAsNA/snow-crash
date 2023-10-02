## Step 1
> cat /etc/passwd

We saw this in the middle of the file: ``flag01:42hDRfypTqqnw:3001:3001::/home/flag/flag01:/bin/bash``.

## Step 2
We passed the found code ``42hDRfypTqqnw`` in a file text ``pass.txt``

> john pass.txt && john pass.txt --show

This command allowed us to decrypt the pass. We got ``?:abcdefg``, so pass is ``abcdefg``

## Step 3
> su flag01

We used the password to pass in sudo mode with the flag01 account.

## Step 4
Then we were able to use ``getflag``.
