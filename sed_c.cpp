// C++ Program to delete the given
// line number from a file
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;

// Delete n-th line from given file
void delete_line(const char *file_name, int n)
{
    // open file in read mode or in mode
    ifstream is(file_name);

    // open file in write mode or out mode
    ofstream ofs;
    ofs.open("temp.txt", ofstream::out);

    // loop getting single characters
    char c;
    int line_no = 1;
    while (is.get(c))
    {
        // if a newline character
        if (c == '\n')
        line_no++;

        // file content not to be deleted
        if (line_no != n)
            ofs << c;
    }

    // closing output file
    ofs.close();

    // closing input file
    is.close();

    // remove the original file
    remove(file_name);

    // rename the file
    rename("temp.txt", file_name);
}

// Driver code
int main()
{
    int n;
    char file_name[150];
    printf("entrer le nom du fichier \n");
    scanf("%s",&file_name);
    printf("entrer le numero de ligne: \n");
    scanf("%d",&n);
    delete_line(file_name, n);
    return 0;
}
