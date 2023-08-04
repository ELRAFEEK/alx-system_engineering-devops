**Write a script that prints the absolute path name of the current working directory.**
where am i : pwd 
**Display the contents list of your current directory.**
list it : ls 
**Write a script that changes the working directory to the user’s home directory.**
bring me home : cd ~
**Display current directory contents in a long format** 
list files : ls -l
**Display current directory contents, including hidden files (starting with .). Use the long format.**
list more files : ls -la
**Display current directory contents.
Long format
with user and group IDs displayed numerically
And hidden files (starting with .)**
list files digitonly : ls -la
**Create a script that creates a directory named my_first_directory in the /tmp/ directory.**
first directory : mkdir /tmp/my_first_directory
**Move the file betty from /tmp/ to /tmp/my_first_directory.**
move that file : mv /tmp/betty /tmp/my_first_directory/
**Delete the file betty.**
first delete : rm /tmp/my_first_directory/betty
**Delete the directory my_first_directory that is in the /tmp directory.**
first dir deletion : rmdir /tmp/my_first_directory
**Write a script that changes the working directory to the previous one.**
back : cd -
**Write a script that lists all files (even ones with names beginning with a period character, which are normally hidden) in the current directory and the parent of the working directory and the /boot directory (in this order), in long format.**
lists : ls -la . .. /boot
**Write a script that prints the type of the file named iamafile. The file iamafile will be in the /tmp directory when we will run your script.**
file type : file /tmp/iamafile
**Create a symbolic link to /bin/ls, named __ls__. The symbolic link should be created in the current working directory.**
symbolic link : ln -s /bin/ls __ls__
**Create a script that copies all the HTML files from the current working directory to the parent of the working directory, but only copy files that did not exist in the parent of the working directory or were newer than the versions in the parent of the working directory.**
copy html : cp ./* .html ../
**Create a script that moves all files beginning with an uppercase letter to the directory /tmp/u.**
lets move : mv [[:upper:]]* /tmp/u
**Create a script that deletes all files in the current working directory that end with the character ~.**
clean emacs : *~
**Create a script that creates the directories welcome/, welcome/to/ and welcome/to/school in the current directory.
You are only allowed to use two spaces (and lines) in your script, not more.**
tree : mkdir -p welcome/to/school
**Write a command that lists all the files and directories of the current directory, separated by commas (,).
Directory names should end with a slash (/)
Files and directories starting with a dot (.) should be listed
The listing should be alpha ordered, except for the directories . and .. which should be listed at the very beginning
Only digits and letters are used to sort; Digits should come first
You can assume that all the files we will test with will have at least one letter or one digit
The listing should end with a new line**
commas : ls -map | sort -d
