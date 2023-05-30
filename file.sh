echo "the no of lines in the file are"
file="/d/oslab/count.txt"
noofline=`wc -l < $file`
echo $noofline
noofwords=`wc -w < $file`
echo "the no of words in the file are"
echo $noofwords