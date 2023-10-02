## Step 1
> ls ~

We found a file named ``level02.pcap``.

## Step 2
> scp -P 4242 level02@[ip]:~/level02.pcap .

By tipying this command outside the VM, we took out the file.

## Step 3
We opened the file with wireshark, and restored all the data sent: ``ft_waNDReL0L``.

## Step 4
> su flag02

We used the password to pass in sudo mode with the flag02 account.

## Step 5
Then we were able to use ``getflag``.
