# htc-class
Class notes, lessons, and examples for An Najah 2018 HTC Class

HelloWorld - Simple Hello World example. Includes two HTCondor submit
files. Onee to run one instance and one to run many instances. It also
includes a script to view the results.

CalcPi - Monte Carlo calculation of pi using a range of inputs. Includes
a script to generate the input list of arguments; the number of samples
to generate when calculating pi.

DAG01 - Basic HTCondor DAG example for counting words in books and then
listing the top 5 words used in each book. Five submit files
are provided to count the words and then a report script to combine the results


DAG    - More complictaed example of an HTCondor DAG for counting words
in a book.  There is one HTCondor submit file to count the words and
then one submit to combine the results. The inputs all HTCondor submit
files are defined in an external list files. A script is provided to
generate the list files from the books contained in the input
directory. This example can be expanded to include more books by adding
them to the input directory and running MakeListFiles.
