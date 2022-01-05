

echo "Enter the nth term you want to print"
read n




a=1;
b=1;
c=1;

for((i=0;i<$n-2;i++))
do
c=`expr $a + $b`;
a=$b;
b=$c;
done


echo "$c";


