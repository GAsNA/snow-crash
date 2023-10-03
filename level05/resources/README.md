## Step 1
When we logged in, we saw the message ``You have new mail.`` So we went to ``/var/spool/mail/flag05``.
In this file, there was a cron tab that executed ``sh /usr/sbin/openarenaserver`` every two minutes.
This file was a bash programm executing every file (to a limit of 5) in ``/opt/openarenaserver``, then deleted them.

## Step 2
> echo 'getflag > /tmp/flag' > /opt/openserverarena/flag

And after 2 minutes, we got the flag printed in the file ``/tmp/flag``.
