#!/bin/bash
#sed: Stream editor for filtering and transforming text.
#-n: Suppresses automatic printing of pattern space.
#'10p': The 10 specifies the 10th line, and p tells sed to print that line.
sed -n '10p' file.txt


#sed: Stream editor for filtering and transforming text.
#'10q;d': This is the script passed to sed.
#10q: Quit after processing the 10th line. This makes the command more efficient because it stops reading the file after the 10th line.
#d: Delete the pattern space (the current line). This ensures that only the 10th line is printed.
sed '10q;d' file.txt