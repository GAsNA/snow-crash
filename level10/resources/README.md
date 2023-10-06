## Step 1
> ls -l ~

We saw two files: an executable ``level10`` and ``token``. ``token`` is an inacessible file for us; ``level10`` is waiting for a file to open and a host to call on port 6969.

## Step 2
> strings level10

We saw that the executable ``uses`` access to know if we can open the file and then uses ``open``. We determined we can trick the executable by passing a symlink on a file we created for access and then pass ``token`` to open it.

## Step 3
We created the file ``server.c`` which is the server that displays everything it receives.
We created the file ``while_symlink.sh`` that created in a loop a symlink on a created file, destroyed it, and created another symlink with the same name on the file ``token``.
We created the file ``while_level10.sh`` that executed the program ``level10`` in a loop with the name of the symlink and host ``0.0.0.0`` as entries.

## Step 4
After executing the 3 files, we got the content of ``token``: ``woupa2yuojeeaaed06riuj63c``, which is the password for sudo mode on ``flag10``. Then, we were able to execute ``getflag``.
