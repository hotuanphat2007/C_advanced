// git init: initialize the folder to be upload to github
// git status: check the status of all file in the folder.
////////////////git add

/*

    thu muc dang lam viec               staging area                                    commited
    main.c                -->git add --> main.c  --> git comit -m "add main.c file"
    main.c              git restore --staged main.c                  <--   main.c
    *****git log: to see files is commited
    *****git branch: check all the branch we have
    *****git checkout -b newbranch
    *****git checkout main: chuyen lai brand
    *****git merge namebranch: gop branch da thay doi lai
    *****git checkout mahex cua 1 commit
    *****git push: push the change of all commit in a branch
*/
#include <stdio.h>
int sum(int a, int b)
{
    return (a + b);
}
int main(int argc, char const *argv[])
{
    printf("test github");
    return 0;
}
