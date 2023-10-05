## Step 1
> ls -l ~

There were two files: an executable ``level09`` and ``token``, wich contain a string.

## Step 2
After making some test to ``level09`` by passing strings, we determined that it returned a string by adding position to each char.
For exemple: ``./level09 aaa`` returned ``abc`` and ``./level09 efg`` returned ``egi``.

## Step 3
We made a program ``reverse.c`` capable of reverse the system. We supposed that the string in ``token`` is the password for ``flag09`` converted by ``level09``.

## Step 4
> su flag09

We obtained the pass ``f3iji1ju5yuevaus41q1afiuq`` and gave it to pass in sudo mode. We were then able to use ``getflag``.
