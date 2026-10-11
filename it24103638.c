yasmitha@LAPTOP-0GSHLSM0:~$ ping -c 4 8.8.8.8
PING 8.8.8.8 (8.8.8.8) 56(84) bytes of data.
64 bytes from 8.8.8.8: icmp_seq=1 ttl=113 time=100 ms
64 bytes from 8.8.8.8: icmp_seq=2 ttl=113 time=63.6 ms
64 bytes from 8.8.8.8: icmp_seq=3 ttl=113 time=92.1 ms
64 bytes from 8.8.8.8: icmp_seq=4 ttl=113 time=66.5 ms

--- 8.8.8.8 ping statistics ---
4 packets transmitted, 4 received, 0% packet loss, time 3006ms
rtt min/avg/max/mdev = 63.643/80.587/100.073/15.805 ms
yasmitha@LAPTOP-0GSHLSM0:~$ mkdir -p ~/RemoteOps_IT24103638
cd ~/RemoteOps_IT24103638
git init
mkdir -p agentfiles/IT24103638
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint:
hint:   git config --global init.defaultBranch <name>
hint:
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint:
hint:   git branch -m <name>
Initialized empty Git repository in /home/yasmitha/RemoteOps_IT24103638/.git/
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ nano Makefile_638
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ git add .
git commit -m "Initial commit: directory setup and Makefile_638"
Author identity unknown

*** Please tell me who you are.

Run

  git config --global user.email "you@example.com"
  git config --global user.name "Your Name"

to set your account's default identity.
Omit --global to set the identity only in this repository.

fatal: empty ident name (for <yasmitha@LAPTOP-0GSHLSM0.localdomain>) not allowed
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ nano agent_638.c
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ nano controller_638.c
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ make -f Makefile_638
Command 'make' not found, but can be installed with:
sudo apt install make        # version 4.3-4.1build1, or
sudo apt install make-guile  # version 4.3-4.1build1
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ ./agent_638 &
[1] 436
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ -bash: ./agent_638: No such file or directory
./controller_638
-bash: ./controller_638: No such file or directory
[1]+  Exit 127                ./agent_638
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ ss -tlnp | grep 9410
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ git add agent_638.c controller_638.c
git commit -m "Implemented full agent protocol, controller client, and file storage"
Author identity unknown

*** Please tell me who you are.

Run

  git config --global user.email "you@example.com"
  git config --global user.name "Your Name"

to set your account's default identity.
Omit --global to set the identity only in this repository.

fatal: empty ident name (for <yasmitha@LAPTOP-0GSHLSM0.localdomain>) not allowed
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ git config --global user.email "it24103638@my.sliit.lk"
git config --global user.name "Yasmitha"
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ git commit -m "Implemented full agent protocol, controller client, and file storage"
[master (root-commit) 98a0a0a] Implemented full agent protocol, controller client, and file storage
 3 files changed, 285 insertions(+)
 create mode 100644 Makefile_638
 create mode 100644 agent_638.c
 create mode 100644 controller_638.c
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ git log --oneline
98a0a0a (HEAD -> master) Implemented full agent protocol, controller client, and file storage
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ nano README.md
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ ./agent_638
-bash: ./agent_638: No such file or directory
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ ./controller_638
-bash: ./controller_638: No such file or directory
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ make -f Makefile_638 clean
Command 'make' not found, but can be installed with:
sudo apt install make        # version 4.3-4.1build1, or
sudo apt install make-guile  # version 4.3-4.1build1
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ nano README.md
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ ```bash
git add README.md
git commit -m "Added README.md with build and personalization specs"
> nano prompt_log.txt
> ======================================================================
AI PROMPT LOG - IE3090 ASSIGNMENT (IT24103638)
======================================================================

Tool Used: Gemini (AI Assistant)

Prompt 1: "How do I calculate personalization values for registration IT24103638?"
Usage: Calculated listening port (9410), SID tag (SID:8363), Auth token (OPS-3638), file names, and paths according to specification formula.

Prompt 2: "Help me construct a multi-threaded C BSD socket server for TCP command handling with whitelisted EXEC."
Usage: Generated initial boilerplate socket code and thread creation framework. Evaluated and verified thread-safety and exact string formatting to include required SID tags.

Prompt 3: "How to handle periodic UDP transmission in C alongside active TCP server?"
Usage: Implemented dedicated UDP thread structure to broadcast periodic status datagrams upon MONITOR START request.
======================================================================
>
>
> nano prompt_log.txt
>
> ^C
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ sudo apt update && sudo apt install make gcc -y
[sudo] password for yasmitha:
ontroller_638.c -o controller_638
Sorry, try again.
[sudo] password for yasmitha:
1Sorry, try again.
[sudo] password for yasmitha:
sudo: 3 incorrect password attempts
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ gcc -Wall -Wextra -pthread agent_638.c -o agent_638
gcc -Wall -Wextra -pthread controller_638.c -o controller_638
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ # 1. Start agent in the background
./agent_638 &

# 2. Run controller to test commands
./controller_638

# 3. Check port listening (for report screenshot)
ss -tlnp | grep 9410

# 4. Stop agent background process
killall agent_638
[1] 648
Connection failed: Connection refused
Agent running on port 9410 with SID SID:8363...
LISTEN 0      10            0.0.0.0:9410      0.0.0.0:*    users:(("agent_638",pid=648,fd=3))
[1]+  Terminated              ./agent_638
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ # Create README.md
cat << 'EOF' > README.md
# RemoteOps - Remote System Monitoring Tool
- Registration Number: IT24103638
- Port: 9410
- Session ID (SID): SID:8363
- Auth Token: OPS-3638
- Storage Directory: ./agentfiles/IT24103638/
- Log File: remoteops_IT24103638.log

## Build & Run Instructions
```bash
make -f Makefile_638
./agent_638
./controller_638
> sudo apt update && sudo apt install make gcc -y
> ^C
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ sudo apt update && sudo apt install make gcc -y
[sudo] password for yasmitha:
Sorry, try again.
[sudo] password for yasmitha:
Sorry, try again.
[sudo] password for yasmitha:
sudo: 3 incorrect password attempts
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$ sudo apt update && sudo apt install make gcc -y
[sudo] password for yasmitha:
Hit:1 http://archive.ubuntu.com/ubuntu noble InRelease
Get:2 http://security.ubuntu.com/ubuntu noble-security InRelease [126 kB]
Get:3 http://archive.ubuntu.com/ubuntu noble-updates InRelease [126 kB]
Get:4 http://security.ubuntu.com/ubuntu noble-security/main amd64 Packages [1121 kB]
Ign:3 http://archive.ubuntu.com/ubuntu noble-updates InRelease
Get:5 http://archive.ubuntu.com/ubuntu noble-backports InRelease [126 kB]
Get:6 http://security.ubuntu.com/ubuntu noble-security/main Translation-en [228 kB]
Get:3 http://archive.ubuntu.com/ubuntu noble-updates InRelease [126 kB]
Get:7 http://archive.ubuntu.com/ubuntu noble-backports/main amd64 Packages [40.6 kB]
Get:8 http://archive.ubuntu.com/ubuntu noble-backports/main Translation-en [9172 B]
Get:9 http://archive.ubuntu.com/ubuntu noble-backports/main amd64 Components [5752 B]
Get:10 http://archive.ubuntu.com/ubuntu noble-backports/main amd64 c-n-f Metadata [368 B]
Get:11 http://archive.ubuntu.com/ubuntu noble-backports/universe amd64 Packages [31.0 kB]
Get:12 http://archive.ubuntu.com/ubuntu noble-backports/universe Translation-en [18.6 kB]
Get:13 http://archive.ubuntu.com/ubuntu noble-backports/universe amd64 Components [12.6 kB]
Get:14 http://archive.ubuntu.com/ubuntu noble-backports/universe amd64 c-n-f Metadata [1588 B]
Get:15 http://archive.ubuntu.com/ubuntu noble-backports/restricted amd64 Components [212 B]
Get:16 http://archive.ubuntu.com/ubuntu noble-backports/multiverse amd64 Packages [748 B]
Get:17 http://archive.ubuntu.com/ubuntu noble-backports/multiverse amd64 Components [212 B]
Get:18 http://archive.ubuntu.com/ubuntu noble-updates/main amd64 Packages [1375 kB]
Get:19 http://security.ubuntu.com/ubuntu noble-security/main amd64 Components [46.4 kB]
Get:20 http://security.ubuntu.com/ubuntu noble-security/main amd64 c-n-f Metadata [11.9 kB]
Get:21 http://security.ubuntu.com/ubuntu noble-security/universe amd64 Packages [1220 kB]
Ign:18 http://archive.ubuntu.com/ubuntu noble-updates/main amd64 Packages
Ign:21 http://security.ubuntu.com/ubuntu noble-security/universe amd64 Packages
Get:22 http://archive.ubuntu.com/ubuntu noble-updates/main Translation-en [306 kB]
Get:23 http://security.ubuntu.com/ubuntu noble-security/universe Translation-en [245 kB]
Ign:22 http://archive.ubuntu.com/ubuntu noble-updates/main Translation-en
Get:24 http://archive.ubuntu.com/ubuntu noble-updates/main amd64 Components [181 kB]
Get:25 http://archive.ubuntu.com/ubuntu noble-updates/main amd64 c-n-f Metadata [17.7 kB]
Get:26 http://archive.ubuntu.com/ubuntu noble-updates/universe amd64 Packages [1702 kB]
Get:27 http://archive.ubuntu.com/ubuntu noble-updates/universe Translation-en [342 kB]
Get:28 http://archive.ubuntu.com/ubuntu noble-updates/universe amd64 Components [388 kB]
Get:29 http://archive.ubuntu.com/ubuntu noble-updates/universe amd64 c-n-f Metadata [34.9 kB]
Get:30 http://archive.ubuntu.com/ubuntu noble-updates/restricted amd64 Packages [1761 kB]
Ign:23 http://security.ubuntu.com/ubuntu noble-security/universe Translation-en
Get:31 http://security.ubuntu.com/ubuntu noble-security/universe amd64 Components [76.2 kB]
Get:32 http://security.ubuntu.com/ubuntu noble-security/universe amd64 c-n-f Metadata [24.2 kB]
Get:33 http://archive.ubuntu.com/ubuntu noble-updates/restricted Translation-en [401 kB]
Get:34 http://security.ubuntu.com/ubuntu noble-security/restricted amd64 Packages [1669 kB]
Get:35 http://archive.ubuntu.com/ubuntu noble-updates/restricted amd64 Components [212 B]
Get:36 http://archive.ubuntu.com/ubuntu noble-updates/restricted amd64 c-n-f Metadata [456 B]
Get:37 http://archive.ubuntu.com/ubuntu noble-updates/multiverse amd64 Packages [55.0 kB]
Get:38 http://archive.ubuntu.com/ubuntu noble-updates/multiverse Translation-en [14.3 kB]
Get:39 http://security.ubuntu.com/ubuntu noble-security/restricted Translation-en [383 kB]
Get:40 http://archive.ubuntu.com/ubuntu noble-updates/multiverse amd64 Components [940 B]
Get:41 http://archive.ubuntu.com/ubuntu noble-updates/multiverse amd64 c-n-f Metadata [656 B]
Get:18 http://archive.ubuntu.com/ubuntu noble-updates/main amd64 Packages [1375 kB]
Get:42 http://security.ubuntu.com/ubuntu noble-security/restricted amd64 Components [212 B]
Get:43 http://security.ubuntu.com/ubuntu noble-security/restricted amd64 c-n-f Metadata [444 B]
Get:44 http://security.ubuntu.com/ubuntu noble-security/multiverse amd64 Packages [49.8 kB]
Get:45 http://security.ubuntu.com/ubuntu noble-security/multiverse Translation-en [12.4 kB]
Get:22 http://archive.ubuntu.com/ubuntu noble-updates/main Translation-en [306 kB]
Get:46 http://security.ubuntu.com/ubuntu noble-security/multiverse amd64 Components [208 B]
Get:47 http://security.ubuntu.com/ubuntu noble-security/multiverse amd64 c-n-f Metadata [468 B]
Get:21 http://security.ubuntu.com/ubuntu noble-security/universe amd64 Packages [1220 kB]
Get:23 http://security.ubuntu.com/ubuntu noble-security/universe Translation-en [245 kB]
Fetched 10.2 MB in 3min 58s (43.0 kB/s)
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
209 packages can be upgraded. Run 'apt list --upgradable' to see them.
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
gcc is already the newest version (4:13.2.0-7ubuntu1).
Suggested packages:
  make-doc
The following NEW packages will be installed:
  make
0 upgraded, 1 newly installed, 0 to remove and 209 not upgraded.
Need to get 180 kB of archives.
After this operation, 414 kB of additional disk space will be used.
Get:1 http://archive.ubuntu.com/ubuntu noble/main amd64 make amd64 4.3-4.1build2 [180 kB]
Fetched 180 kB in 2s (99.1 kB/s)
Selecting previously unselected package make.
(Reading database ... 45078 files and directories currently installed.)
Preparing to unpack .../make_4.3-4.1build2_amd64.deb ...
Unpacking make (4.3-4.1build2) ...
Setting up make (4.3-4.1build2) ...
Processing triggers for man-db (2.12.0-4build2) ...
yasmitha@LAPTOP-0GSHLSM0:~/RemoteOps_IT24103638$

