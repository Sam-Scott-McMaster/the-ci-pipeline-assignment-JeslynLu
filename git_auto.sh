# Jeslyn Lu, lu196, October 3rd, 2024
#
# git_auto automates the git add, commit, tag, and push process in one command.

#!/bin/bash

git add .
git commit -m "$1"
if [[ ! -z "$2" ]] #checking for a tag argument
then
	git tag "$2"
fi

git push origin

if [[ ! -z "$2" ]] #checking for a tag argument
then
        git push origin "$2"
fi
