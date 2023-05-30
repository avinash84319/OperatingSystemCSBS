echo "give no of terms to print"
read n
x=0
y=1
echo $x
echo $y
n=`expr $n - 2 `
c=1
while [ $c -le $n ]
do
d=`expr $x + $y `
echo $d
x=$y
y=$d
c=`expr $c + 1 `
done 
