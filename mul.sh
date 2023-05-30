echo "Give the input in file"
file="/d/oslab/mulinput.txt"
no=`cat < $file`
echo "The input is $no"
echo "The multiplication table is"
i=1
while [ $i -le 10 ]
do
res=`expr $no \* $i`
echo "$no*$i = $res"
i=`expr $i + 1`
done
