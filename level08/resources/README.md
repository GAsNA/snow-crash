## Step 1
> ls -l

We saw two files: an executable ``level08`` and a txt ``token``.

## Step 2
> strings level08

We saw in it the word ``token`` written in hard and juste below the sentence ``You may not access '%s'``. We conclued that the executable doesn't take any file named ``token``.

## Step 3
> ln -s ~/token /tmp/flag

> ./level08 /tmp/flag

By that, we created a symbolinc link to the ``token`` file and gave it to the executable. We got the flag.
